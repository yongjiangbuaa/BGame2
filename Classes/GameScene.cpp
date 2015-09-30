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


NS_B_BEGIN

static GameScene* s_sharedGameScene = NULL;


bool GameScene::init()
{
    GameWorld::shared()->InitializeGameWorld();

    this->m_BottomUI = OpUIBottom::create();
    this->m_CityView = CityView::create();
    this->m_RoleView = RoleView::create();

    
    
    //默认显示RoleView 隐藏其他
    m_RoleView->setVisible(true);
    
    //把节点挂在树上
    m_CenterContainer->add(m_CityView);
    m_CenterContainer->add(m_RoleView);
    this->addChild(m_BottomUI);
    this->addChild(m_CenterContainer);

    //posision
    m_BottomUI->setPosition(Vect2::ZERO);
    m_CenterContainer->setPosition(0,0);
    
    
    //跳往默认界面
    showUI(UIENUM::RoleView);
    
    return true;
}


void GameScene::showUI(int i)
{
    switch (i) {
        case UIENUM::RoleView:
            //界面初始化数值
            m_RoleView->initData(Role::shared());
            //此界面显示 其他界面隐藏
            m_RoleView->setVisible(true);
            hideOther();
            break;
            
        default:
            break;
    }
}







NS_B_END
