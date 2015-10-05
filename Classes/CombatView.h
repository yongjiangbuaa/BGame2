//
//  CombatView.h
//  BGame2
//
//  Created by gengyj on 15-10-5.
//
//

#ifndef __BGame2__CombatView__
#define __BGame2__CombatView__

#include "common.h"
#include "UIBase.h"
NS_B_BEGIN
class CombatView : public UIBase
{
public:
    virtual bool init();
    // implement the "static create()" method manually
    CREATE_FUNC(CombatView);
    
    virtual void initData();
    
    
};
NS_B_END

#endif /* defined(__BGame2__CombatView__) */
