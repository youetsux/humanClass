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
//�@mainでwarriorクラスのインスタンスを作る
//�Aexecute, drawを呼ぶ

//�BHumanクラスのポインタに、Warriorクラスの
//  インスタンスのアドレスを代入する
//�CHumanクラスのポインタ経由でexecuteを呼び出す。
//�D隠蔽関係により、Humanクラスのexecuteが
//　呼ばれるのを確認
//�Eexecute関数をオーバーライドして�Bから�Dを実行