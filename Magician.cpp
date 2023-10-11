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
	cout << GetName() << "�́A�U�����@��������" << endl;
}

void Magician::Draw()
{
	cout << "+===================+" << endl;
	cout << "�E�ƁF " << "���@�g��" << endl;
	cout << "���O�F " << GetName() << endl;
	cout << "  HP�F " << GetHp() << endl;
	cout << "  MP�F " << GetMp() << endl;
	cout << "+===================+" << endl;
}
