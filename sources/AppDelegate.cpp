#include "AppDelegate.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos2d.h"
#include "ConfigParser.h"
#include "lua_module_register.h"

#if (CC_TARGET_PLATFORM != CC_PLATFORM_WP8)
#include "Runtime.h"
#endif

// extra lua module
#include "cocos2dx_extra.h"
#include "lua_extensions/lua_extensions_more.h"
#include "luabinding/lua_cocos2dx_extension_filter_auto.hpp"
#include "luabinding/lua_cocos2dx_extension_nanovg_auto.hpp"
#include "luabinding/lua_cocos2dx_extension_nanovg_manual.hpp"
#include "luabinding/cocos2dx_extra_luabinding.h"
#include "luabinding/HelperFunc_luabinding.h"
#include "lua_mybo_extensions_auto.hpp"
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
#include "luabinding/cocos2dx_extra_ios_iap_luabinding.h"
#endif
#if ANYSDK_DEFINE > 0
#include "anysdkbindings.h"
#include "anysdk_manual_bindings.h"
#endif

//scaleform&spine lua module
#include "lua_cocos2dx_scaleform_auto.hpp"
#include "lua_cocos2dx_scaleform_manual.hpp"
#include "lua_utils_auto.hpp"
#include "lua_mybo_extensions_auto.hpp"
#include "lua_mybo_extensions_attackarea_manual.hpp"

using namespace CocosDenshion;

USING_NS_CC;
using namespace std;

static void quick_module_register(lua_State *L)
{
    luaopen_lua_extensions_more(L);

    lua_getglobal(L, "_G");
    if (lua_istable(L, -1))//stack:...,_G,
    {
        register_all_quick_manual(L);
        // extra
        luaopen_cocos2dx_extra_luabinding(L);
        register_all_cocos2dx_extension_filter(L);
        register_all_cocos2dx_extension_nanovg(L);
        register_all_cocos2dx_extension_nanovg_manual(L);
        register_all_mybo_extensions(L);
        register_all_mybo_extension_attackarea_manual(L);
        luaopen_HelperFunc_luabinding(L);
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        luaopen_cocos2dx_extra_ios_iap_luabinding(L);
#endif
    }
    lua_pop(L, 1);
}

//
AppDelegate::AppDelegate()
:_launchMode(1)
{
}

AppDelegate::~AppDelegate()
{
    SimpleAudioEngine::end();
}

//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs()
{
    //set OpenGL context attributions,now can only set six attributions:
    //red,green,blue,alpha,depth,stencil
    GLContextAttrs glContextAttrs = { 8, 8, 8, 8, 24, 8 };

    GLView::setGLContextAttrs(glContextAttrs);
}

bool AppDelegate::applicationDidFinishLaunching()
{
#if (COCOS2D_DEBUG > 0) && CC_USE_RUNTIME
    // NOTE:Please don't remove this call if you want to debug with Cocos Code IDE
    if (_launchMode)
    {
#if (CC_TARGET_PLATFORM != CC_PLATFORM_WP8)
        initRuntime();
#endif
    }
#endif

    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if (!glview) {
        Size viewSize = ConfigParser::getInstance()->getInitViewSize();
        string title = ConfigParser::getInstance()->getInitViewName();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 || CC_TARGET_PLATFORM == CC_PLATFORM_MAC)
        extern void createSimulator(const char* viewName, float width, float height, bool isLandscape = true, float frameZoomFactor = 1.0f);
        bool isLanscape = ConfigParser::getInstance()->isLanscape();
        createSimulator(title.c_str(), viewSize.width, viewSize.height, isLanscape);
#else
        glview = cocos2d::GLViewImpl::createWithRect(title.c_str(), Rect(0, 0, viewSize.width, viewSize.height));
        director->setOpenGLView(glview);
#endif
    }
    
    director->setAnimationInterval(1.0/60);
    
    auto engine = LuaEngine::getInstance();
    ScriptEngineManager::getInstance()->setScriptEngine(engine);
    lua_State* L = engine->getLuaStack()->getLuaState();
    lua_module_register(L);

    // use Quick-Cocos2d-X
    quick_module_register(L);

    LuaStack* stack = engine->getLuaStack();
#if ANYSDK_DEFINE > 0
    lua_getglobal(stack->getLuaState(), "_G");
    tolua_anysdk_open(stack->getLuaState());
    tolua_anysdk_manual_open(stack->getLuaState());
    lua_pop(stack->getLuaState(), 1);
#endif

    //注册scaleform
    lua_getglobal(L, "_G");
//    register_all_cocos2dx_scaleform(L);
//    register_all_cocos2dx_scaleform_manual(L);
    //spine
    register_all_lib_utils(L);
    lua_pop(L, 1);

    stack->setXXTEAKeyAndSign("2dxLua", strlen("2dxLua"), "XXTEA", strlen("XXTEA"));

    //register custom function
    //LuaStack* stack = engine->getLuaStack();
    //register_custom_function(stack->getLuaState());

#if (COCOS2D_DEBUG > 0) && (CC_TARGET_PLATFORM != CC_PLATFORM_WP8) && CC_USE_RUNTIME
    // NOTE:Please don't remove this call if you want to debug with Cocos Code IDE
    //_launchMode = false;
    if (_launchMode)
    {
        startRuntime();
        //Director::getInstance()->setDisplayStats(true);
        //Director::getInstance()->runWithScene(FlashTest::scene());
    }
    else
    {
        engine->executeScriptFile(ConfigParser::getInstance()->getEntryFile().c_str());
    }
#else
    engine->executeScriptFile(ConfigParser::getInstance()->getEntryFile().c_str());
#endif

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    Director::getInstance()->stopAnimation();
    Director::getInstance()->pause();

    SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
    SimpleAudioEngine::getInstance()->pauseAllEffects();

    Director::getInstance()->getEventDispatcher()->dispatchCustomEvent("APP_ENTER_BACKGROUND_EVENT");
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    Director::getInstance()->resume();
    Director::getInstance()->startAnimation();

    SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
    SimpleAudioEngine::getInstance()->resumeAllEffects();

    Director::getInstance()->getEventDispatcher()->dispatchCustomEvent("APP_ENTER_FOREGROUND_EVENT");
}

void AppDelegate::setLaunchMode(int mode)
{
    _launchMode = mode;
}
