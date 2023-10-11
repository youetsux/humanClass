#include "Cleric.h"
#include <iostream>
using std::cout;
using std::endl;

Cleric::Cleric()
	:Human(),faith_(10)
{
}

Cleric::Cleric(string _name, int _hp, int _mp, int _faith)
	:Human(_name,_hp,_mp),faith_(_faith)
{
}

bool Cleric::CastMagic()
{
	int nMp = GetMp();
	if (nMp - 10 < 0)
	{
		cout << "魔法は使えない" << endl;
		return false;
	}
	else {
		SetMp(nMp - 10);
		return true;
	}	
}

void Cleric::Execute()
{
	
	if (CastMagic())
		cout << GetName() << "は、回復魔法を唱えた" << endl;
	else
		cout << GetName() << "は、何もできない" << endl;
	
}

void Cleric::Draw()
{
	cout << "+===================+" << endl;
	cout << " 職業： " << "僧侶" << endl;
	cout << " 名前： " << GetName() << endl;
	cout << "   HP： " << GetHp() << endl;
	cout << "   MP： " << GetMp() << endl;
	cout << "FAITH:  " << faith_ << endl;
 	cout << "+===================+" << endl;
}

void Cleric::Beat()
{
	cout << GetName() << "は、杖で殴った！" << endl;
}
