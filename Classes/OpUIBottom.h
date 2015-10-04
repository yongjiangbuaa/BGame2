//
//  OpUILayer.h
//  BGame2
//
//  Created by gengyj on 15-9-30.
//
//

#ifndef __BGame2__OpUILayer__
#define __BGame2__OpUILayer__

#include "common.h"
#include <stdio.h>

NS_B_BEGIN
class OpUIBottom : public cocos2d::Layer
{
public:
    virtual bool init();
    
    
    // implement the "static create()" method manually
    CREATE_FUNC(OpUIBottom);
    
    MenuItem* city;
    MenuItem* role;
    MenuItem* combat;
    MenuItem* ventory;
    // a selector callback
    void menuCityCallback(cocos2d::Ref* pSender);
    void menuRoleCallback(cocos2d::Ref* pSender);
    
    
private:
    
};

NS_B_END

#endif /* defined(__BGame2__OpUILayer__) */
