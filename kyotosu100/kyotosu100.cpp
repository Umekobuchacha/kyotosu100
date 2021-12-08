// kyotosu100.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include "kyotosu100.h"
#include "CDataMng.h"

using namespace std;
int main()
{
	ExecKnock26();
}

void ExecKnock26(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	switch (data.GetData())
	{
	case 1: cout << "one"; break;
	case 2: cout << "two"; break;
	case 3: cout << "three"; break;
	default:
		cout << "other";
		break;
	}

}

void ExecKnock25(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if (data.GetData() < -10)
	{
		cout << "range 1";
	}
	else if (data.GetData() >= 0)
	{
		cout << "range 3";
	}
	else
	{
		cout << "range 2";
	}

}


void ExecKnock24(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if ((data.GetData() >= -10) && (data.GetData() < 0))
	{
		cout << "OK";
	}
	else if (data.GetData() >= 10)
	{
		cout << "OK";
	}
	else
	{
		cout << "NG";
	}

}


void ExecKnock23(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if ((data.GetData() >= -5) && (data.GetData() < 10))
	{
		cout << "OK";
	}
	else
	{
		cout << "NG";
	}

}

void ExecKnock22(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if ((data.GetData() <= -10) || (data.GetData() >= 10))
	{
		cout << "OK";
	}

}


void ExecKnock21(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if ((data.GetData() > 5) && (data.GetData() < 20))
	{
		cout << "OK";
	}

}

void ExecKnock20(void)
{
	CDataMng data1, data2;
	data1.SafetyInputData("input 1st value: ");
	data2.SafetyInputData("input 2nd value: ");

	int result1 = data1.GetData() / data2.GetData();
	cout << "result: " << result1 << endl;
	cout << "result: " << result1 * data2.GetData() << endl;


}

void ExecKnock19(void)
{
	static const int cArraySize = 5;
	int Array[cArraySize];
	CDataMng data;

	for (int i = 0; i < cArraySize;i++)
	{
		Array[i] = data.SafetyInputData("input number: ");
	}
	for (int i = 0; i < cArraySize; i++)
	{
		cout << Array[i] << endl;
	}
}


void ExecKnock18(void)
{
	static const int cArraySize = 10;
	int Array[cArraySize];
	CDataMng data;
	data.SafetyInputData("input number: ");

	for (int i = 0; i < cArraySize;i++)
	{
		Array[i] = data.GetData();
	}

	for (int i = 0; i < cArraySize; i++)
	{
		cout << Array[i] << endl;
	}
}

void ExecKnock17(void)
{
	int Array[] = { 0,1,2,3,4,5,6,7,8,9 };
	int ArraySize = sizeof(Array) / sizeof(Array[0]);
	for (int i = 0; i < ArraySize; i++)
	{
		cout << Array[i] << endl;
	}

}

void ExecKnock16(void)
{
	CDataMng data;
	while (1)
	{
		data.SafetyInputData("input number: ");

		if (data.GetData() == 0) {
			break;
		}
	}
}

void ExecKnock15(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	int EndNum = data.GetData();
	for (int i = 0; i <= EndNum;i += 2)
	{
		cout << i << endl;
	}

}

void ExecKnock14(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	int FirstNum = data.GetData();
	for (int i = FirstNum; i >= 0;i--)
	{
		cout << i << endl;
	}

}

void ExecKnock13(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	int EndNum = data.GetData();
	for (int i = 0; i <= EndNum;i++)
	{
		cout << i << endl;
	}

}

void ExecKnock12(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	int RepeatNum = data.GetData();
	for (int i = 0;i < RepeatNum;i++)
	{
		cout << "Hello World" << endl;
	}
}


void ExecKnock11(void)
{
	for (int i = 0;i < 10;i++)
	{
		cout << "Hello World" << endl;
	}
}

void ExecKnock10(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	cout << "absolute value is " << abs(data.GetData()) << endl;
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

