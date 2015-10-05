//
//  VentoryView.cpp
//  BGame2
//
//  Created by gengyj on 15-10-5.
//
//

#include "VentoryView.h"


NS_B_BEGIN

bool VentoryView::init()
{
    if ( !UIBase::init() )
    {
        return false;
    }
    //色块
    LayerColor* color = LayerColor::create(Color4B::GRAY, SCREEN_WIDTH, SCREEN_HEIGHT);
    this->addChild(color);
    return true;
    
    return true;
}

void VentoryView::initData()
{
    
}


NS_B_END