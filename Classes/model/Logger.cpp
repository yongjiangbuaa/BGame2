#include "Logger.h"
#include <stdio.h>
NS_B_BEGIN

void Logger::debug(string* a )
{
        CCLOG("%s",a->c_str());
	 	//cout << a << "\n";
}

void Logger::debug(char const* a )
{
    CCLOG("%s",a);
	 	//cout << a << "\n";
}


 void Logger::debug(IntArray a)
 {
	for( int key : a)
	{
        CCLOG("%d",key);

		//cout << key << "\n";
	}
}
NS_B_END