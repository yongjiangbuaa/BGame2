#include "AppDelegate.h"
#include "GameScene.h"

USING_NS_CC;
static cocos2d::Size designResolutionSize = cocos2d::Size(1024, 768);
static cocos2d::Size smallResolutionSize = cocos2d::Size(480, 320);
static cocos2d::Size mediumResolutionSize = cocos2d::Size(1024, 768);
static cocos2d::Size largeResolutionSize = cocos2d::Size(2048, 1536);

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs()
{
    //set OpenGL context attributions,now can only set six attributions:
    //red,green,blue,alpha,depth,stencil
    GLContextAttrs glContextAttrs = {8, 8, 8, 8, 24, 8};

    GLView::setGLContextAttrs(glContextAttrs);
}

// If you want to use packages manager to install more packages, 
// don't modify or remove this function
static int register_all_packages()
{
    return 0; //flag for packages manager
}

bool AppDelegate::applicationDidFinishLaunching() {
    
  
    // initialize director
    auto director = Director::getInstance();
    //初始化屏幕缩放相关参数
    initScreenScale();

    // turn on display FPS
    director->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);
    
    // create a scene. it's an autorelease object
    //auto scene = HelloWorld::createScene();
    auto scene = abc::GameScene::createScene();
    

    // run
    director->runWithScene(scene);

    return true;
}


void AppDelegate::initScreenScale()
{
    Size sWin = Director::getInstance()->getWinSizeInPixels();
    Size sDesign = Size(sWin.width, sWin.height);
    
    float r = sWin.height / sWin.width;
    if(sDesign.height>1024) sDesign.height = 1024;
    if(sDesign.height<960) sDesign.height = 960;
    
    sDesign.width = sDesign.height / r;
    
    
    
    auto glview = Director::getInstance()->getOpenGLView();
    if(!glview) {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
        glview = GLViewImpl::createWithRect("BGame2", Rect(0, 0, sDesign.width, sDesign.height));
#else
        glview = GLViewImpl::create("BGame2");
#endif
        Director::getInstance()->setOpenGLView(glview);
    }
    
    //CCEGLView::sharedOpenGLView()->setDesignResolutionSize(sDesign.width, sDesign.height, kResolutionShowAll);
    
    
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}


