#include "Magician.h"
#include <iostream>
using std::cout;
using std::endl;

Magician::Magician()
	:Human()
{
}

Magician::Magician(string _name, int _hp, int _mp)
	:Human(_name, _hp, _mp)
{
}

void Magician::Execute()
{
	cout << GetName() << "は、攻撃魔法を唱えた" << endl;
}

void Magician::Draw()
{
	cout << "+===================+" << endl;
	cout << "職業： " << "魔法使い" << endl;
	cout << "名前： " << GetName() << endl;
	cout << "  HP： " << GetHp() << endl;
	cout << "  MP： " << GetMp() << endl;
	cout << "+===================+" << endl;
}
