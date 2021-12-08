// kyotosu100.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "kyotosu100.h"
using namespace std;

int main()
{
	ExecKnock01();
}


void ExecKnock00(void)
{
	cout << "Hello World";
}

void ExecKnock01(void)
{
	cout << "12345 + 23456 = " << 12345 + 23456;
}
