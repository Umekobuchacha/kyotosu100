// kyotosu100.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include "kyotosu100.h"
#include "CDataMng.h"

using namespace std;
int main()
{
	ExecKnock02();
}

void ExecKnock03(void)
{
	CDataMng data;
	cout << data.SafetyInputData("input number:");
}

void ExecKnock02(void)
{
	cout << "12345 ÷ 7の余りは " << 12345 % 7;

}

void ExecKnock01(void)
{
	cout << "12345 + 23456 = " << 12345 + 23456;
}


void ExecKnock00(void)
{
	cout << "Hello World";
}

