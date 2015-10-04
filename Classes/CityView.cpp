//
//  CityView.cpp
//  BGame2
//
//  Created by gengyj on 15-10-2.
//
//

#include "CityView.h"


NS_B_BEGIN

bool CityView::init()
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

void CityView::initData()
{
    
}


NS_B_END
