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
#include "Role.h"
#include "UIBase.h"


NS_B_BEGIN

static GameScene* s_sharedGameScene = NULL;

GameScene::GameScene()
{
    
}

Scene* GameScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = GameScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;

}

GameScene* GameScene::shared()
{
    if(!s_sharedGameScene)
    {
        s_sharedGameScene =  new GameScene();
    }
    
    return s_sharedGameScene;
    
}
bool GameScene::init()
{
    GameWorld::shared()->InitializeGameWorld();
    m_CenterContainer = Node::create();
    this->m_BottomUI = OpUIBottom::create();
    this->m_CityView = CityView::create();
    this->m_RoleView = RoleView::create();

    
    
    //默认显示RoleView 隐藏其他
    m_RoleView->setVisible(true);
    
    //把节点挂在树上
    m_CenterContainer->addChild(m_CityView);
    m_CenterContainer->addChild(m_RoleView);
    this->addChild(m_BottomUI);
    this->addChild(m_CenterContainer);

    //posision
    m_BottomUI->setPosition(Vect::ZERO);
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
