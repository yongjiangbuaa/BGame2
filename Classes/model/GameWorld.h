
#ifndef __B__BGameWorld__
#define __B__BGameWorld__

#include "common.h"
#include "BBase.h"

NS_B_BEGIN

class GameWorld : BBase{

public:

		 string  currentUI;
		 StringArray opList;
		~GameWorld();
		static GameWorld* shared();
		void InitializeGameWorld();
		bool switchUI(string uiName);
		void SerializeGameWorld();

		void uiController(string op);//命令行控制界面用
private:
	GameWorld();
    string loadUserData();
    void saveUserData();
};


NS_B_END

#endif