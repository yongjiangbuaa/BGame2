//
//  RoleScene.cpp
//  BGame2
//
//  Created by gengyj on 15-9-30.
//
//

#include "RoleView.h"



NS_B_BEGIN

bool RoleView::init()
{
    if ( !UIBase::init() )
    {
        return false;
    }
    
    
    //色块
    LayerColor* layer = LayerColor::create(Color4B::WHITE,SCREEN_WIDTH,SCREEN_HEIGHT);
    this->addChild(layer);
    
    
    //增加背景图，增加按钮，调整位置这些事。可以在ccb里完成
    
    //也可以代码完成
    LayerColor* portrait = LayerColor::create(Color4B::GRAY,SCREEN_WIDTH-150,SCREEN_HEIGHT-150);
    this->addChild(portrait);
    
    
    
    return true;
}

void RoleView::initData()
{
    
}

NS_B_END