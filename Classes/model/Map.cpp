#include "Map.h"


NS_B_BEGIN

static Map* s_sharedMap = NULL;
Map::Map()
{

}

Map::Map(string a)
{
	
}

Map::~Map()
{
	delete s_sharedMap;
}

Map* Map::shared()
{
	if(s_sharedMap == NULL)
	{
		s_sharedMap = new Map();
	}
	return s_sharedMap;
}

Role* Map::getPVE(int idx)
{
    return new Role("json data");
}

NS_B_END