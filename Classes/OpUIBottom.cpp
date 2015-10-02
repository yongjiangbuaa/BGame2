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
    
    
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    city = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(OpUIBottom::menuCityCallback, this));
    role = MenuItemImage::create(
                                 "CloseNormal.png",
                                 "CloseSelected.png",
                                 CC_CALLBACK_1(OpUIBottom::menuRoleCallback, this));

    city->setPosition(0,0);
    role->setPosition(100,0);
    
    // create menu, it's an autorelease object
    auto menu = Menu::create(city,role, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);

    
    
    return true;
}


void OpUIBottom::menuCityCallback(cocos2d::Ref *pSender)
{
    GameScene::shared()->showUI(City);
}

void OpUIBottom::menuRoleCallback(cocos2d::Ref *pSender）
{
    GameScene::shared()->showUI(Role);
    
}

NS_B_END