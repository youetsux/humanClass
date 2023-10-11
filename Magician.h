#pragma once
#include "Human.h"
#include <string>
using std::string;

class Magician :
    public Human
{
public:
    Magician();
    Magician(string _name, int _hp, int _mp);
    void Execute() override;
    void Draw() override;
};

