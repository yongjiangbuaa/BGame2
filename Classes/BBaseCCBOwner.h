//
//  BBaseCCBOwner.h
//  BGame2
//
//  Created by gengyj on 15-10-8.
//
//

#ifndef __BGame2__BBaseCCBOwner__
#define __BGame2__BBaseCCBOwner__

#include "common.h"

class BBaseCCBOwner
: public Layer     //有的ccb可能是Node，所以用基类
{
public:
    ///在BAReadCCBI读完后调用initUIReadOver.
    virtual void initUIReadOver();
    
    //----------------------------- animation ----------------------
    
    /**设置动画的管理者*/
    void setAnimationManager(CCBAnimationManager *pAnimationManager);
    const CCBAnimationManager* getAnimationManager() const { return m_pAnimationManager; }
    
    /**
     * 设置动画的回调函数
     * @param callbackFunc 需要用到 callfunc_selector
     */
    void setAnimationCompletedCallback(Ref *target, SEL_CallFunc callbackFunc);
    
    /**删除动画的回调*/
    void delAnimationCompletedCallback();
    
    /**停止所有动画*/
    void stopAllActions();
    
    /**获取正在播放的时间轴名称*/
    const char* getRunningSequenceName() { return m_pAnimationManager->getRunningSequenceName(); }
    
    /**
     * 是否自动播放某个动画
     * @param nId 序列， -1 为不自动播放任何动画
     */
    void autoPlayAnimation(int nId);
    
    
    /**
     * 设置当前的动画完成后的下一个动画
     * @param nId 0 表示没有下一个
     
     void setNextAnimation(int nId);
     */
    
    /**
     * 播放动画, 会调用stopAllActions 。
     * @param pName 对应ccb的时间轴名称
     * @param needLoop 循环播放,默认true
     * @param fTweenDuration 延迟多少毫秒播放，默认0
     *
     */
    void playAnimations(const char *pName, bool needLoop=true, float fTweenDuration=0);
    
    
    
    
    //------------------------------ animation end----------------------
    
protected:
    CCBAnimationManager* m_pAnimationManager;
    
};
#endif /* defined(__BGame2__BBaseCCBOwner__) */
