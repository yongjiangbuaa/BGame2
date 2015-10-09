//
//  BReadCCBI.cpp
//  BGame2
//
//  Created by gengyj on 15-10-8.
//
//

#include "BReadCCBI.h"
NS_B_BEGIN
///读取ccbi文件, 并调用Owner 的 initUIReadOver
CCNode* BReadCCBI::read(const char *pCCBFileName, CCNode *pParent, BBaseCCBOwner *pOwner, int nTag, const int zOrder, bool hasAnimation)
{
    NodeLoaderLibrary *lib = NodeLoaderLibrary::sharedNodeLoaderLibrary();    //生成一个默认的Node Loader
    
    CCBReader *reader = new CCBReader(lib); //用node load lib 初始化一个ccb reader
    reader->setCCBRootPath("ccbResources/");
    Node *node = reader->readNodeGraphFromFile(pCCBFileName, pOwner);
    
    if(hasAnimation && pOwner){
        pOwner->setAnimationManager(reader->getAnimationManager());
    }
    
    reader->release(); //注意手动释放内存
    
    if(node == NULL)
    {
        CCLOG("Error in Load cocosBuilder data :%s", pCCBFileName);
    }else
    {
        if(pParent)
        {
            //            if(modalWin)ba
            //            {
            //                //TODO 在CCLayerColor 截取touch事件，不能穿透？
            //                CCLayerColor* mask = CCLayerColor::create(ccc4(10, 10, 0, 125));
            //                mask->setTouchEnabled(false);
            //                node->addChild(mask, -1);
            //            }else{
            //
            //            }
            pParent->addChild(node, zOrder, nTag);
        }
        if (pOwner) pOwner->initUIReadOver();
    }
    
    return node;
}

NS_B_END