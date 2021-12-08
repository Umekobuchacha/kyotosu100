// kyotosu100.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include "kyotosu100.h"
#include "CDataMng.h"

using namespace std;
int main()
{
	ExecKnock09();
}

void ExecKnock09(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if (data.GetData() > 0)
	{
		cout << "positive" << endl;
	}
	else if (data.GetData() < 0)
	{
		cout << "negative" << endl;
	}
	else
	{
		cout << "zero" << endl;
	}
}


void ExecKnock08(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if (data.GetData() > 0)
	{
		cout << "positive" << endl;
	}
}

void ExecKnock07(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if (data.GetData() == 0)
	{
		cout << "zero" << endl;
	}
	else
	{
		cout << "not zero" << endl;
	}
}

void ExecKnock06(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if (data.GetData() == 0)
	{
		cout << "zero" << endl;
	}
}

void ExecKnock05(void)
{
	CDataMng data1, data2;
	data1.SafetyInputData("input 1st number: ");
	data2.SafetyInputData("input 2ns number: ");

	cout << "和: " << data1.GetData() + data2.GetData() << endl;
	cout << "差: " << data1.GetData() - data2.GetData() << endl;
	cout << "積: " << data1.GetData() * data2.GetData() << endl;
	cout << "商: " << data1.GetData() / data2.GetData() << "余り: " << data1.GetData() % data2.GetData() << endl;
}

void ExecKnock04(void)
{
	CDataMng data;
	cout << "answer = " << data.SafetyInputData("input number:") * 3;
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

