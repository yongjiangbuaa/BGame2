//
//  RoleScene.cpp
//  BGame2
//
//  Created by gengyj on 15-9-30.
//
//

#include "RoleView.h"



NS_B_BEGIN
static RoleView* s_staticRoleView = NULL;
bool RoleView::init()
{
    if ( !UIBase::init() )
    {
        return false;
    }
    
    
    //色块
    LayerColor* layer = LayerColor::create(Color4B::WHITE,SCREEN_WIDTH,SCREEN_HEIGHT);
    this->addChild(layer);
    
    
    //增加背景图，增加按钮，调整位置这些事。可以在ccb里完成
    
    //也可以代码完成
    LayerColor* portrait = LayerColor::create(Color4B::GRAY,SCREEN_WIDTH-150,SCREEN_HEIGHT-150);
    this->addChild(portrait);
    
    /**
    slot1 = ControlButton::create();
    slot1->setBackgroundSprite(Scale9Sprite::create("anniu.png"));
    slot2 = BButton::createButton();
    slot3 = BButton::createButton();
    slot4 = BButton::createButton();
    slot5 = BButton::createButton();
    slot6 = BButton::createButton();
    slot7 = BButton::createButton();
    slot8 = BButton::createButton();
    slot9 = BButton::createButton();
    slot10 = BButton::createButton();
    **/
    return true;
}

void RoleView::initData()
{
    
}

RoleView::RoleView():
slot1(NULL),
slot2(NULL),
slot3(NULL),
slot4(NULL),
slot5(NULL),
slot6(NULL),
slot7(NULL),
slot8(NULL),
slot9(NULL),
slot10(NULL)
{
    read("ccbi/RoleView.ccbi", this, this, 0, 0, false);
}

RoleView* RoleView::shared()
{
    if(!s_staticRoleView)
    {
        s_staticRoleView = new RoleView();
    }
    return s_staticRoleView;
}

RoleView::~RoleView()
{
    
}

bool RoleView::onAssignCCBMemberVariable(Ref* pTarget, const char* pMemberVariableName, Node* pNode)
{
    //CCLOG("%s", pMemberVariableName);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "slot1", ControlButton*, slot1);
    return false;
}

//绑定按钮的回调
Control::Handler RoleView::onResolveCCBCCControlSelector(Ref * pTarget, const char* pSelectorName) {
    return NULL;
}

///在BAReadCCBI读完后调用initUIReadOver.
void RoleView::initUIReadOver() {
    
}

void RoleView::onEnter()
{
    
}

void RoleView::onExit()
{
    
}
NS_B_END