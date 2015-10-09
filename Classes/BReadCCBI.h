//
//  BReadCCBI.h
//  BGame2
//
//  Created by gengyj on 15-10-8.
//
//

#ifndef __BGame2__BReadCCBI__
#define __BGame2__BReadCCBI__

#include "common.h"
#include "BBaseCCBOwner.h"
NS_B_BEGIN
class BReadCCBI
{
    
public:
    ///
    /**
     * 读取ccbi文件, 并调用Owner 的 initUIReadOver
     * @param pCCBFileName ccbi 物理路径
     * @param pParent 添加CCNode
     * @param pOwner 指定读取属性等操作的类
     * @param nTag node tag 默认是0
     * @param zOrder 轴 默认是0
     * @param hasAnimation 是否包含动画 默认不包含
     * @param modalWin 删掉了
     */
virtual Node* read(const char * pCCBFileName,
                     Node* pParent,
                     BBaseCCBOwner* pOwner,
                     int nTag = 0,
                     const int zOrder = 0,
                     bool hasAnimation = false);


};

NS_B_END
#endif /* defined(__BGame2__BReadCCBI__) */
