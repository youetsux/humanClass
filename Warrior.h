#pragma once
#include "Human.h"
class Warrior :
    public Human
{
public:
    Warrior(); //�R���X�g���N�^�̃I�[�o�[���[�h
    Warrior(string _name, int _hp, int _mp);
    void Execute() override;
    void Draw() override;
};

