#include <iostream>
#include <string>
#include <vector>
#include "Warrior.h"
#include "Cleric.h"
#include "Magician.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const int NUMOFJOB{ 3 };
	Human** pArray = nullptr;
	
	//動的インスタンス取得
	Warrior *war = new Warrior("トチロー",50,50);
	Cleric *cr = new Cleric("ジャッキー",100,100,200);
	Magician* mg = new Magician("ガンダルフ", 20, 1000);
	pArray = new Human * [NUMOFJOB] {war, cr, mg};
	//pArray[0] = war;
	//pArray[1] = cr;
	//pArray[2] = mg;
	
	for (int i = 0; i < NUMOFJOB; i++)
	{
		pArray[i]->Execute();
	}
	for (int i = 0; i < NUMOFJOB; i++)
	{
		pArray[i]->Draw();
	}
	return 0;

}

//p = cr;
////ダウンキャスト（ベース→派生へのキャスト）
//((Cleric* )p)->Beat();
//cout << ((Cleric*)p)->GetFaith() << endl;

//Human man("もょもと",100,50);
//man.Execute();
//man.Draw();
//①mainでwarriorクラスのインスタンスを作る
//②execute, drawを呼ぶ

//③Humanクラスのポインタに、Warriorクラスの
//  インスタンスのアドレスを代入する
//④Humanクラスのポインタ経由でexecuteを呼び出す。
//⑤隠蔽関係により、Humanクラスのexecuteが
//　呼ばれるのを確認
//⑥execute関数をオーバーライドして③から⑤を実行