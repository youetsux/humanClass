#include <iostream>
#include <string>
#include <vector>
#include "Warrior.h"

using std::cout;
using std::cin;
using std::string;
using std::vector;

int main()
{
	//Human man("�������",100,50);
	//man.Execute();
	//man.Draw();
	Warrior *war = new Warrior("�g�`���[",50,50);
	Human* p = nullptr;
	p = war;
	p->Execute();
	p->Draw();

	return 0;
	//�@main��warrior�N���X�̃C���X�^���X�����
	//�Aexecute, draw���Ă�

	//�BHuman�N���X�̃|�C���^�ɁAWarrior�N���X��
	//  �C���X�^���X�̃A�h���X��������
	//�CHuman�N���X�̃|�C���^�o�R��execute���Ăяo���B
	//�D�B���֌W�ɂ��AHuman�N���X��execute��
	//�@�Ă΂��̂��m�F
	//�Eexecute�֐����I�[�o�[���C�h���ćB����D�����s
}