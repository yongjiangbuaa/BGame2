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
    LayerColor* bgColor = LayerColor::create(Color4B::GREEN,SCREEN_WIDTH,SCREEN_WIDTH/5);
    this->addChild(bgColor);
    
    city = MenuItemSprite::create(MENU_BTN_BLUE,MENU_BTN_RED, MENU_BTN_GRAY,  B_CALLBACK_1(OpUIBottom::menuItemClkCallback, this));
    
    role = MenuItemSprite::create(MENU_BTN_BLUE,MENU_BTN_RED, MENU_BTN_GRAY, B_CALLBACK_1(OpUIBottom::menuItemClkCallback, this));
    
    combat = MenuItemSprite::create(MENU_BTN_BLUE,MENU_BTN_RED,MENU_BTN_GRAY,B_CALLBACK_1(OpUIBottom::menuItemClkCallback, this));
    
    ventory = MenuItemSprite::create(MENU_BTN_BLUE,MENU_BTN_RED,MENU_BTN_GRAY,B_CALLBACK_1(OpUIBottom::menuItemClkCallback, this));

    city->setPosition(0,0);
    role->setPosition(150,0);
    combat->setPosition(300,0);
    ventory->setPosition(450,0);
    // create menu, it's an autorelease object
    Menu* menu = Menu::create(city,role,combat,ventory, NULL);
    menu->setPosition(75,75);
    this->addChild(menu, 1);

    
    return true;
}

void OpUIBottom::menuItemClkCallback(cocos2d::Ref *pSender)
{
    if(pSender == city)
    {
        GameScene::shared()->showUI(GameScene::shared()->m_CityView);
        
    }else if(pSender == role)
    {
         GameScene::shared()->showUI(GameScene::shared()->m_RoleView);
        
    }else if(pSender == combat)
    {
         GameScene::shared()->showUI(GameScene::shared()->m_CombatView);
    }else if(pSender == ventory)
    {
         GameScene::shared()->showUI(GameScene::shared()->m_VentoryView);
    }
        
    
}

void OpUIBottom::menuCityCallback(cocos2d::Ref *pSender)
{
    if(pSender == city){
        GameScene::shared()->showUI(GameScene::shared()->m_CityView);

    }
}

void OpUIBottom::menuRoleCallback(cocos2d::Ref *pSender)
{
    GameScene::shared()->showUI(GameScene::shared()->m_RoleView);
    
}


void OpUIBottom::menuCombatCallback(cocos2d::Ref *pSender)
{
    GameScene::shared()->showUI(GameScene::shared()->m_CombatView);
    
}


void OpUIBottom::menuVentoryCallback(cocos2d::Ref *pSender)
{
    GameScene::shared()->showUI(GameScene::shared()->m_VentoryView);
    
}

NS_B_END