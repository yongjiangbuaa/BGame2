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
#include "BReadCCBI.h"
#include "BBaseCCBOwner.h"
NS_B_BEGIN
class UIBase : public BBaseCCBOwner
, public BReadCCBI         //可读取ccbi
, public CCBMemberVariableAssigner  //读取成功后可分配属性， 必须
, public CCBSelectorResolver        //绑定函数，事件，不必须
, public NodeLoaderListener       //监听ccbi加载完后，不必须， 只有在注册loader的时候才有用
{
public:
    

    virtual void initData();
    /// 子类重写，读取ccbi的属性
    virtual bool onAssignCCBMemberVariable(Ref* pTarget, const char* pMemberVariableName, Node* pNode);
    
    ///绑定menuitem 的回调
    virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector(Ref* pTarget, const char* pSelectorName);
    
    ///绑定按钮的回调
    virtual cocos2d::extension::Control::Handler onResolveCCBCCControlSelector(Ref* pTarget, const char* pSelectorName);
    
    //    virtual SEL_CallFunc 回调？
    
    //loader 加载完成
    virtual void onNodeLoaded(Node * pNode, NodeLoader * pNodeLoader);
    
    /// 初始化ui,在 read ccbi 文件后调用
    virtual void initUIReadOver();
    
private:
};
NS_B_END
#endif /* defined(__BGame2__UIBase__) */
