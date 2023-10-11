#include "Human.h"
#include <iostream>
using std::cout;
using std::endl;

Human::Human()
	:hp_(0),mp_(0),name_("noname")
{
}

Human::Human(string _name, int _hp, int _mp)
	:hp_(_hp),mp_(_mp),name_(_name)
{
}

void Human::Execute()
{
	cout << name_ << "は、殴った" << endl;
}

void Human::Draw()
{
	cout << "+===================+" << endl;
	cout <<"名前： " <<  name_ << endl;
	cout <<"  HP： " << hp_ << endl;
	cout <<"  MP： " << mp_ << endl;
	cout << "+===================+" << endl;
}
