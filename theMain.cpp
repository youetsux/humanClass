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
	//①mainでwarriorクラスのインスタンスを作る
	//②execute, drawを呼ぶ

	//③Humanクラスのポインタに、Warriorクラスの
	//  インスタンスのアドレスを代入する
	//④Humanクラスのポインタ経由でexecuteを呼び出す。
	//⑤隠蔽関係により、Humanクラスのexecuteが
	//　呼ばれるのを確認
	//⑥execute関数をオーバーライドして③から⑤を実行
}