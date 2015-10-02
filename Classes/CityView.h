//
//  CityView.h
//  BGame2
//
//  Created by gengyj on 15-10-2.
//
//

#ifndef __BGame2__CityView__
#define __BGame2__CityView__

#include "common.h"
NS_B_BEGIN
class CityView : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    
    // implement the "static create()" method manually
    CREATE_FUNC(CityView);
};
NS_B_END
#endif /* defined(__BGame2__CityView__) */
