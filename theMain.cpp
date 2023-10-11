#include <iostream>
#include <string>
#include <vector>
#include "Warrior.h"
#include "Cleric.h"
#include "Magician.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const int NUMOFJOB{ 3 };
	Human** pArray = nullptr;
	
	//���I�C���X�^���X�擾
	Warrior *war = new Warrior("�g�`���[",50,50);
	Cleric *cr = new Cleric("�W���b�L�[",100,100,200);
	Magician* mg = new Magician("�K���_���t", 20, 1000);
	pArray = new Human * [NUMOFJOB] {war, cr, mg};
	//pArray[0] = war;
	//pArray[1] = cr;
	//pArray[2] = mg;
	
	for (int i = 0; i < NUMOFJOB; i++)
	{
		pArray[i]->Execute();
	}
	for (int i = 0; i < NUMOFJOB; i++)
	{
		pArray[i]->Draw();
	}
	return 0;

}

//p = cr;
////�_�E���L���X�g�i�x�[�X���h���ւ̃L���X�g�j
//((Cleric* )p)->Beat();
//cout << ((Cleric*)p)->GetFaith() << endl;

//Human man("�������",100,50);
//man.Execute();
//man.Draw();
//�@main��warrior�N���X�̃C���X�^���X�����
//�Aexecute, draw���Ă�

//�BHuman�N���X�̃|�C���^�ɁAWarrior�N���X��
//  �C���X�^���X�̃A�h���X��������
//�CHuman�N���X�̃|�C���^�o�R��execute���Ăяo���B
//�D�B���֌W�ɂ��AHuman�N���X��execute��
//�@�Ă΂��̂��m�F
//�Eexecute�֐����I�[�o�[���C�h���ćB����D�����s