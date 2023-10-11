#pragma once
#include "Human.h"
class Cleric :
    public Human
{
    int faith_;//M‹ÂS
public:
    Cleric();
    Cleric(string _name, int _hp, int _mp, int _faith);
    
    bool CastMagic();//MpŒ¸‚ç‚·
    void Execute() override;
    void Draw() override;
    void Beat();
};

