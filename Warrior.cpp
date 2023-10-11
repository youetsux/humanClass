#include "Warrior.h"
#include <iostream>

using std::cout;
using std::endl;
Warrior::Warrior()
	:Human()
{
}

Warrior::Warrior(string _name, int _hp, int _mp)
	:Human(_name, _hp, _mp)
{
}

void Warrior::Execute()
{
	cout << GetName() << "�́A���ŉ�����" << endl;
}

void Warrior::Draw()
{
	cout << "+===================+" << endl;
	cout << "�E�ƁF " << "��m" << endl;
	cout << "���O�F " << GetName() << endl;
	cout << "  HP�F " << GetHp() << endl;
	cout << "  MP�F " << GetMp() << endl;
	cout << "+===================+" << endl;
}
