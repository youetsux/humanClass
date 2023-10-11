#pragma once
#include "Human.h"
class Warrior :
    public Human
{
public:
    Warrior(); //コンストラクタのオーバーロード
    Warrior(string _name, int _hp, int _mp);
    void Execute() override;
    void Draw() override;
};

