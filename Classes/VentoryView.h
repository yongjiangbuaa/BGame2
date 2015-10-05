//
//  VentoryView.h
//  BGame2
//
//  Created by gengyj on 15-10-5.
//
//

#ifndef __BGame2__VentoryView__
#define __BGame2__VentoryView__

#include "common.h"
#include "UIBase.h"
NS_B_BEGIN
class VentoryView : public UIBase
{
public:
    virtual bool init();
    // implement the "static create()" method manually
    CREATE_FUNC(VentoryView);
    
    virtual void initData();
    
    
};
NS_B_END

#endif /* defined(__BGame2__VentoryView__) */
