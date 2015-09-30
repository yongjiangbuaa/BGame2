//
//  RoleScene.h
//  BGame2
//
//  Created by gengyj on 15-9-30.
//
//

#ifndef __BGame2__RoleScene__
#define __BGame2__RoleScene__

#include <stdio.h>

class RoleView : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    
    // implement the "static create()" method manually
    CREATE_FUNC(RoleView);
};

#endif /* defined(__BGame2__RoleScene__) */
