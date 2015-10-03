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
    LayerColor* bgColor = LayerColor::create(Color4B::GREEN,750,150);
    this->addChild(bgColor);
    
    city = MenuItemSprite::create(LayerColor::create(Color4B::BLUE,140,140),LayerColor::create(Color4B::RED,140,140), LayerColor::create(Color4B::GRAY,140,140), CC_CALLBACK_1(OpUIBottom::menuCityCallback, this));
    
    role = MenuItemSprite::create(LayerColor::create(Color4B::BLUE,140,140),LayerColor::create(Color4B::RED,140,140), LayerColor::create(Color4B::GRAY,140,140), CC_CALLBACK_1(OpUIBottom::menuRoleCallback, this));

    city->setPosition(0,0);
    role->setPosition(150,0);
    
    // create menu, it's an autorelease object
    Menu* menu = Menu::create(city,role, NULL);
    menu->setPosition(75,75);
    this->addChild(menu, 1);

    
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