#pragma once
#include "Human.h"

class Cleric :
    public Human
{
    int faith_;//M‹ÂS
    bool CastMagic();//MpŒ¸‚ç‚·
public:
    Cleric();
    Cleric(string _name, int _hp, int _mp, int _faith);
    
    int GetFaith() { return faith_; }
    void Execute() override;
    void Draw() override;
    void Beat();
};

