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
		cout << "���@�͎g���Ȃ�" << endl;
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
		cout << GetName() << "�́A�񕜖��@��������" << endl;
	else
		cout << GetName() << "�́A�����ł��Ȃ�" << endl;
	
}

void Cleric::Draw()
{
	cout << "+===================+" << endl;
	cout << " �E�ƁF " << "�m��" << endl;
	cout << " ���O�F " << GetName() << endl;
	cout << "   HP�F " << GetHp() << endl;
	cout << "   MP�F " << GetMp() << endl;
	cout << "FAITH:  " << faith_ << endl;
 	cout << "+===================+" << endl;
}

void Cleric::Beat()
{
	cout << GetName() << "�́A��ŉ������I" << endl;
}
