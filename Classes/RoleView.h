//
//  RoleScene.h
//  BGame2
//
//  Created by gengyj on 15-9-30.
//
//

#ifndef __BGame2__RoleView__
#define __BGame2__RoleView__


#include "common.h"
#include "UIBase.h"
#include "BSprite.h"

NS_B_BEGIN

class RoleView : public UIBase
{
public:
    RoleView();
    static RoleView * shared();
    void purge();
    
    virtual bool onAssignCCBMemberVariable(Ref* pTarget, const char* pMemberVariableName, Node* pNode);
    
    //绑定按钮的回调
    virtual Control::Handler onResolveCCBCCControlSelector(Ref * pTarget, const char* pSelectorName);
    
    ///在BAReadCCBI读完后调用initUIReadOver.
    virtual void initUIReadOver();
    
    virtual void onEnter();
    virtual void onExit();
    virtual void update(float delta);
    virtual void tick(float time);

    
    
    //BSprite* portrait;
    virtual bool init();
    // implement the "static create()" method manually
    CREATE_FUNC(RoleView);
    
    virtual void initData();
private:
    virtual ~RoleView();
    ControlButton* slot1;
    ControlButton* slot2;
    ControlButton* slot3;
    ControlButton* slot4;
    ControlButton* slot5;
    ControlButton* slot6;
    ControlButton* slot7;
    ControlButton* slot8;
    ControlButton* slot9;
    ControlButton* slot10;

};

NS_B_END

#endif /* defined(__BGame2__RoleScene__) */
