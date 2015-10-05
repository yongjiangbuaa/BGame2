//
//  UIBase.h
//  BGame2
//
//  Created by gengyj on 15-10-2.
//
//  UI界面的主框架 用底部按钮及其他按钮导航

#ifndef __BGame2__UIBase__
#define __BGame2__UIBase__

#include "common.h"
NS_B_BEGIN
class UIBase : public  cocos2d::Layer
{
public:
    

    virtual void initData();
    
private:
};
NS_B_END
#endif /* defined(__BGame2__UIBase__) */
