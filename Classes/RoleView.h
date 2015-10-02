//
//  RoleScene.h
//  BGame2
//
//  Created by gengyj on 15-9-30.
//
//

#ifndef __BGame2__RoleScene__
#define __BGame2__RoleScene__


#include "common.h"
#include "UIBase.h"

NS_B_BEGIN

class RoleView : public UIBase
{
public:
    virtual bool init();
    // implement the "static create()" method manually
    CREATE_FUNC(RoleView);
    
    virtual void initData();
};

NS_B_END

#endif /* defined(__BGame2__RoleScene__) */
