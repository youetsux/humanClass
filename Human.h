#pragma once
#include <string>
using std::string;

class Human
{
	int hp_;
	int mp_;
	string name_;
public:
	Human();
	Human(string _name, int _hp, int _mp);
	//hp,mp,name�̃Z�b�^�[�ƃQ�b�^�[
	void SetHp(int _hp) { hp_ = _hp; }
	void SetMp(int _mp) { mp_ = _mp; }
	void SetName(string _name) { name_ = _name; }
	int GetHp() { return hp_; }
	int GetMp() { return mp_; }
	string GetName() { return name_; }
	virtual void Execute();//�R�}���h���s�i�����̐키()�ɑ����j
	//"���O"�͉������@��\��
	virtual void Draw();
	//�S���̃p�����[�^��\��
};

//��m��Warrior
//�m����Cleric
//���@�g����Magician