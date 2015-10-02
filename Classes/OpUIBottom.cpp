//
//  OpUIBottom.cpp
//  BGame2
//
//  Created by gengyj on 15-9-30.
//
//

#include "OpUIBottom.h"
#include "GameScene.h"

//操作界面。随不同的情景有不同的按钮

NS_B_BEGIN




bool OpUIBottom::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    //色块
    LayerColor* color = LayerColor::create(Color4B::GREEN,100,100);
    this->addChild(color);
    /**
    
    city = MenuItemSprite::create(LayerColor::create(Color4B::GREEN,50,50),LayerColor::create(Color4B::BLUE,50,50));
    
    role = MenuItemSprite::create(LayerColor::create(Color4B::GREEN,50,50),LayerColor::create(Color4B::BLUE,50,50));

    city->setPosition(0,0);
    role->setPosition(100,0);
    
    // create menu, it's an autorelease object
    auto menu = Menu::create(city,role, NULL);
    menu->setPosition(Vect::ZERO);
    this->addChild(menu, 1);

    **/
    
    return true;
}


void OpUIBottom::menuCityCallback(cocos2d::Ref *pSender)
{
    GameScene::shared()->showUI(GameScene::shared()->m_CityView);
}

void OpUIBottom::menuRoleCallback(cocos2d::Ref *pSender)
{
    GameScene::shared()->showUI(GameScene::shared()->m_RoleView);
    
}

NS_B_END