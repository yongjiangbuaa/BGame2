//
//  CityView.h
//  BGame2
//
//  Created by gengyj on 15-10-2.
//
//

#ifndef __BGame2__CityView__
#define __BGame2__CityView__

#include "common.h"
#include "UIBase.h"
NS_B_BEGIN
class CityView : public UIBase
{
public:
    virtual bool init();
    // implement the "static create()" method manually
    CREATE_FUNC(CityView);

    virtual void initData();
    
    
};
NS_B_END
#endif /* defined(__BGame2__CityView__) */
