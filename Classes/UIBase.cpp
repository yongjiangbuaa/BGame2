//
//  UIBase.cpp
//  BGame2
//
//  Created by gengyj on 15-10-2.
//
//

#include "UIBase.h"

NS_B_BEGIN


//-----------------baseCCBI 方法
bool UIBase::onAssignCCBMemberVariable(Ref *pTarget, const char *pMemberVariableName, Node *pNode)
{
    return false;
}

SEL_MenuHandler UIBase::onResolveCCBCCMenuItemSelector(Ref *pTarget, const char *pSelectorName)
{
    CCLOG("read MenuItem selector member %s", pSelectorName);
    return NULL;
}

Control::Handler UIBase::onResolveCCBCCControlSelector(Ref *pTarget, const char *pSelectorName)
{
    //    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(pTarget, pSelectorName, pTarget::pSelectorName);  //获得类属性？
    CCLOG("read CCControl selector member %s", pSelectorName);
    return NULL;
}

void UIBase::onNodeLoaded(Node *pNode, NodeLoader *pNodeLoader)
{
    
    CCLOG("onNodeLoaded");
}

void UIBase::initUIReadOver()
{
    CCLOG("init ui read")   ;
}

//-----------------baseCCBI 方法

void UIBase::initData()
{
    
}




NS_B_END