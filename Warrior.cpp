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
	cout << GetName() << "は、剣で殴った" << endl;
}

void Warrior::Draw()
{
	cout << "+===================+" << endl;
	cout << "職業： " << "戦士" << endl;
	cout << "名前： " << GetName() << endl;
	cout << "  HP： " << GetHp() << endl;
	cout << "  MP： " << GetMp() << endl;
	cout << "+===================+" << endl;
}
