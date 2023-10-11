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
	//hp,mp,nameのセッターとゲッター
	void SetHp(int _hp) { hp_ = _hp; }
	void SetMp(int _mp) { mp_ = _mp; }
	void SetName(string _name) { name_ = _name; }
	int GetHp() { return hp_; }
	int GetMp() { return mp_; }
	string GetName() { return name_; }
	virtual void Execute();//コマンド実行（資料の戦う()に相当）
	//"名前"は殴った　を表示
	virtual void Draw();
	//全部のパラメータを表示
};

//戦士→Warrior
//僧侶→Cleric
//魔法使い→Magician