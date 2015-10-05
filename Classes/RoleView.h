//
//  RoleScene.h
//  BGame2
//
//  Created by gengyj on 15-9-30.
//
//

#ifndef __BGame2__RoleView__
#define __BGame2__RoleView__


#include "common.h"
#include "UIBase.h"
#include "BButton.h"

NS_B_BEGIN

class RoleView : public UIBase
{
public:
    
    BButton* slot1;
    BButton* slot2;
    BButton* slot3;
    BButton* slot4;
    BButton* slot5;
    BButton* slot6;
    BButton* slot7;
    BButton* slot8;
    BButton* slot9;
    BButton* slot10;
    
    virtual bool init();
    // implement the "static create()" method manually
    CREATE_FUNC(RoleView);
    
    virtual void initData();
};

NS_B_END

#endif /* defined(__BGame2__RoleScene__) */
