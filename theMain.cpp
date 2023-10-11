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
	//Human man("もょもと",100,50);
	//man.Execute();
	//man.Draw();
	Warrior *war = new Warrior("トチロー",50,50);
	Human* p = nullptr;
	p = war;
	p->Execute();
	p->Draw();

	return 0;
	//�@mainでwarriorクラスのインスタンスを作る
	//�Aexecute, drawを呼ぶ

	//�BHumanクラスのポインタに、Warriorクラスの
	//  インスタンスのアドレスを代入する
	//�CHumanクラスのポインタ経由でexecuteを呼び出す。
	//�D隠蔽関係により、Humanクラスのexecuteが
	//　呼ばれるのを確認
	//�Eexecute関数をオーバーライドして�Bから�Dを実行
}