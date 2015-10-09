//
//  BBaseCCBOwner.cpp
//  BGame2
//
//  Created by gengyj on 15-10-8.
//
//

#include "BBaseCCBOwner.h"

NS_B_BEGIN

void BBaseCCBOwner::initUIReadOver()
{
    
}


//----------------------------- animation ------------------------

void BBaseCCBOwner::setAnimationManager(CCBAnimationManager *pAnimationManager)
{
    m_pAnimationManager = NULL;
    //    CC_SAFE_RELEASE_NULL(m_pAnimationManager);
    m_pAnimationManager = pAnimationManager;
    CC_SAFE_RETAIN(m_pAnimationManager);
}


void BBaseCCBOwner::setAnimationCompletedCallback(Ref *target, SEL_CallFunc callbackFunc)
{
    m_pAnimationManager->setAnimationCompletedCallback(target, callbackFunc);
}

void BBaseCCBOwner::delAnimationCompletedCallback()
{
    setAnimationCompletedCallback(NULL, NULL);
}


void BBaseCCBOwner::stopAllActions()
{
    CCLOG(" stop all action name: %s", getRunningSequenceName());
    autoPlayAnimation(-1);
    //    setNextAnimation(-1);
    m_pAnimationManager->getRootNode()->stopAllActions();
}


void BBaseCCBOwner::autoPlayAnimation(int nId)
{
    m_pAnimationManager->setAutoPlaySequenceId(nId);
}

void BBaseCCBOwner::playAnimations(const char *pName, bool needLoop, float fTweenDuration)
{
    CCLOG(" play action name: %s", pName);
    m_pAnimationManager->runAnimationsForSequenceNamedTweenDuration(pName, fTweenDuration);
    //    setNextAnimation(needLoop ? m_pAnimationManager->getSequenceId() : -1);
}



//------------------------------ animation end----------------------


NS_B_END