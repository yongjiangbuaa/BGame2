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
#include "UIBase.h"
NS_B_BEGIN

class GameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
    virtual bool init();

    UIBase* m_CurrentUI;
    Node* m_BottomUI;
    UIBase* m_CityView;
    UIBase* m_RoleView;
    Node* m_CenterContainer;//仅仅用于统一位置
    static GameScene* shared();
    void showUI(UIBase* ui);
    
};

NS_B_END

#endif /* defined(__BGame2__GameScene__) */
