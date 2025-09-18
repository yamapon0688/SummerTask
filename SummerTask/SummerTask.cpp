#include <iostream>
using namespace std;

struct DynamicObject
{
	char name[20];
	int posX;
	int posY;
	int imageID;
};

struct MainCharacter
{
	DynamicObject dynamicObject;
	int LV;
	int HP;
	int MP;
	int Power;
};

struct NPC
{
	DynamicObject dynamicObject;
	int talkID;
};

struct Player
{
	MainCharacter mainCharacter;
	char job[20];
};

struct Enemy
{
	MainCharacter mainCharacter;
	bool Chest;
	bool boss;
};
int main()
{
	Player player[] =
	{
		{
			"P", 5, 8, 123, 5, 100, 150, 100, "a",
		}
	};
	
	Enemy enemy[] =
	{
		{
			"E", 12, 6, 543, 6, 120, 110, 95, true, false,
		}
	};
}
