//
//  GameScene.h
//  BGame2
//
//  Created by gengyj on 15-9-30.
//
//

#ifndef __BGame2__GameScene__
#define __BGame2__GameScene__

#include "common.h"
#include <stdio.h>

NS_B_BEGIN

class GameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    Node* m_CurrentUI;
    Node* m_BottomUI;
    Node* m_CityView;
    Node* m_RoleView;
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
};

NS_B_END

#endif /* defined(__BGame2__GameScene__) */
