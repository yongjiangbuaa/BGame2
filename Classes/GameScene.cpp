//
//  GameScene.cpp
//  BGame2
//
//  Created by gengyj on 15-9-30.
//
//

#include "GameScene.h"
#include "GameWorld.h"
#include "OpUIBottom.h"
#include "CityView.h"
#include "RoleView.h"
#include "CombatView.h"
#include "VentoryView.h"
#include "Role.h"
#include "UIBase.h"


NS_B_BEGIN

static GameScene* s_sharedGameScene = NULL;


Scene* GameScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = GameScene::create();
    
    s_sharedGameScene = layer;
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;

}


GameScene* GameScene::shared()
{
    if(!s_sharedGameScene)
    {
        assert("singleton GameScene is null!! Not init by director");
    }
    
    return s_sharedGameScene;
    
}
bool GameScene::init()
{
    
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    Size winSize = Director::getInstance()->getWinSize();
    Size winSizeInPx = Director::getInstance()->getWinSizeInPixels();
    Size designSize = Director::getInstance()->getOpenGLView()->getDesignResolutionSize();
    CCLOG("visibleSize x=%f  y=%f",visibleSize.width,visibleSize.height);
    CCLOG("visibleOrigin length=%f",origin.length());
    CCLOG("winSize x=%f  y=%f",winSize.width,winSize.height);
    CCLOG("winSizeInPx x=%f  y=%f",winSizeInPx.width,winSizeInPx.height);
    CCLOG("designSize x=%f  y=%f",designSize.width,designSize.height);
    GameWorld::shared()->InitializeGameWorld();
    m_CenterContainer = Node::create();
    
    m_BottomUI = OpUIBottom::create();
    m_CityView = CityView::create();
    m_RoleView = RoleView::create();
    m_CombatView = CombatView::create();
    m_VentoryView = VentoryView::create();
    
    
    
    
    //默认显示RoleView 隐藏其他
    //m_RoleView->setVisible(true);
    //m_CityView->setVisible(true);
    
    //把节点挂在树上
    m_CenterContainer->addChild(m_CityView);
    m_CenterContainer->addChild(m_RoleView);
    m_CenterContainer->addChild(m_CombatView);
    m_CenterContainer->addChild(m_VentoryView);
    
    //m_CenterContainer->setPosition(90,160);
    //m_BottomUI->setPosition(160,160);
    this->addChild(m_CenterContainer);
    this->addChild(m_BottomUI);


    //posision
    m_BottomUI->setPosition(0,0);
    m_CenterContainer->setPosition(0,0);
    
    
    //跳往默认界面
    showUI(m_RoleView);
    
    return true;
}


void GameScene::showUI(UIBase* ui)
{
    
    ui->initData();//如果没初始化数据则初始化，已初始化的则更新数据
    ui->setVisible(true);
    //此界面显示 其他界面隐藏

    for(Node* uiTmp : m_CenterContainer->getChildren())
    {
        if( uiTmp != ui) uiTmp->setVisible(false);
    }
    
}







NS_B_END
