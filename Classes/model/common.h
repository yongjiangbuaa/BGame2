
#ifndef __B__BCommon__
#define __B__BCommon__

// 系统级
#include "cocos2d.h"
#include "cocos-ext.h"
#include <vector>
#include <map>

USING_NS_CC;
USING_NS_CC_EXT;
using namespace std;

//BGame项目的命名空间

#define NS_B_BEGIN namespace abc {  
#define NS_B_END   }


#include "BBase.h"



NS_B_BEGIN

#define StringArray std::vector<string> 
#define IntArray    std::vector<int> 

// new callbacks based on C++11
#define B_CALLBACK_0(__selector__,__target__, ...) std::bind(&__selector__,__target__, ##__VA_ARGS__)
#define B_CALLBACK_1(__selector__,__target__, ...) std::bind(&__selector__,__target__, std::placeholders::_1, ##__VA_ARGS__)
#define B_CALLBACK_2(__selector__,__target__, ...) std::bind(&__selector__,__target__, std::placeholders::_1, std::placeholders::_2, ##__VA_ARGS__)
#define B_CALLBACK_3(__selector__,__target__, ...) std::bind(&__selector__,__target__, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, ##__VA_ARGS__)

typedef std::function<void(Ref*)> bCallback;

NS_B_END

#endif				 
