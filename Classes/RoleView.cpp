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
    LayerColor* color = LayerColor::create(Color4B::BLUE,SCREEN_WIDTH,SCREEN_HEIGHT);
    this->addChild(color);
    return true;
}

void RoleView::initData()
{
    
}

NS_B_END