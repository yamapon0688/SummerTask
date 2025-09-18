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

void drawMainCaracterParam(const MainCharacter& mc)
{
	cout << "名前 : " << mc.dynamicObject.name << endl
		<< " 座標 : " << mc.dynamicObject.posX << ", " << mc.dynamicObject.posY
		<< " 画像ID : " << mc.dynamicObject.imageID
		<< " レベル : " << mc.LV
		<< " 体力 : " << mc.HP
		<< " マジックポイント : " << mc.MP
		<< " 攻撃力 : " << mc.Power << endl << endl;
}
int main()
{
	Player player[] =
	{
		{
			"P1", 5, 8, 123, 5, 100, 150, 100, "a",
		},
		{
			"P2", 7, 8, 124, 6, 120, 170, 110, "b",
		},
		{
			"P3", 10, 15, 125, 8, 150, 200, 130, "c",
		},
		{
			"P4", 10, 10, 126, 7, 100, 180, 120, "d",
		},
	};
	
	Enemy enemy[] =
	{
		{
			"E", 12, 6, 543, 6, 120, 110, 95, true, false,
		}
	};

	MainCharacter mainCharacter[] =
	{
		{
			"MC", 10, 10, 130, 8, 100, 150, 100,
		},
	};

	int size = sizeof mainCharacter / sizeof * mainCharacter;
	for (int i = 0; i < size; i++)
	{
		drawMainCaracterParam(mainCharacter[i]);
	}
}
