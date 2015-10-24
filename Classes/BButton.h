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
    
    /**
     设置文本
     */
    virtual void setText(Node* pText);
    /**
     设置文本内容
     */
    virtual void setTextContent(string text);
    virtual string getTextContent();
    
    /**
     设置图标内容
     */
    virtual void setIcon(Node* pNode);
    
    /**
     获取图标内容
     */
    virtual Node* getIcon() { return m_pIcon; }
    
    /**
     设置背景内容
     */
    virtual void setBackground(Scale9Sprite* pSprite);
    
    /**
     设置外边距
     */
    virtual void setMargin(int nLeft, int nTop, int nRight, int nBottom)
    {
        m_nMarginLeft = nLeft;
        m_nMarginRight = nRight;
        m_nMarginTop = nTop;
        m_nMarginBottom = nBottom;
        
        updateLayout();
    };
    
    /**
     设置内边距
     */
    virtual void setPadding(int nPadding)
    {
        m_nPadding = nPadding;
        
        updateLayout();
    };
    
    virtual void setSpacing(int nSpacing)
    {
        m_nSpacing = nSpacing;
        
        updateLayout();
    }
    
    /**
     更新布局
     */
    virtual void updateLayout()
    {
        setContentSize(m_sizeLimit);
    };
    
    void setGrey(bool flag);
    virtual void setTextColor(const ccColor3B& color);
    
    virtual CCSize getBackgroundSize() { return m_sizeBg; }
    
    /**icon和bg的缩放*/
    void setIconBgScale(float sx, float sy);

    
    ///默认背景
    Scale9Sprite* m_pBackgroundNormal;
    
    ///按下时的背景
    Scale9Sprite* m_pBackgroundPressed;
    
    ///不可点击时的背景
    Scale9Sprite* m_pBackgroundDisabled;
    
    ///是否已经按下
    bool m_bPressed;
    
    ///是否可以点击
    bool m_bEnabled;
    
    bool m_bInit;

private:
    
    
protected:
    
    virtual void setContentSize(const Size& contentSize);
    
    int m_nPadding;
    int m_nSpacing;
    Size m_sizeLimit;
    
    int m_nMarginLeft;
    int m_nMarginRight;
    int m_nMarginTop;
    int m_nMarginBottom;
    
    Node* m_pText;
    Node* m_pIcon;
    Scale9Sprite* m_pBack;
    
    Size m_sizeBg;
    
};

NS_B_END


#endif /* defined(__BGame2__BButton__) */
