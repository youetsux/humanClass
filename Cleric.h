#pragma once
#include "Human.h"
class Cleric :
    public Human
{
    int faith_;//�M�S
public:
    Cleric();
    Cleric(string _name, int _hp, int _mp, int _faith);
    
    bool CastMagic();//Mp���炷
    void Execute() override;
    void Draw() override;
    void Beat();
};

