//
//  BButton.h
//  BGame2
//
//  Created by gengyj on 15-10-3.
//
//

#ifndef __BGame2__BButton__
#define __BGame2__BButton__

#include "common.h"

NS_B_BEGIN

class BButton : public Node
{
public:
    CREATE_FUNC(BButton);
    static BButton* create(Sprite* sprite,Sprite* selectSprite,const bCallback& callback);
    static BButton* create(string filename,string btn_title,const bCallback& callback);
    void setSprite(Sprite* sprite);
    void setSelectedSprite(Sprite* sprite);
    void setCallbackFunc(const bCallback& callback);
    
    static BButton* createMenuButton();

private:
    
};

NS_B_END


#endif /* defined(__BGame2__BButton__) */
