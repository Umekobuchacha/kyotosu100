// kyotosu100.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include "kyotosu100.h"
#include "CDataMng.h"

using namespace std;
int main()
{
	ExecKnock42();
}

void ExecKnock42(void)
{
	CDataMng data1, data2, data3;
	data1.SafetyInputData("input number 1: ");
	data2.SafetyInputData("input number 2: ");
	data3.SafetyInputData("input number 3: ");

	if ((data1.Get() <= data2.Get()) && (data2.Get() <= data3.Get()))
	{
		cout << "OK";
	}
	else
	{
		cout << "NG";
	}
}

void ExecKnock41(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");

	if ((0 < data.Get()) && (data.Get() < 10))
	{
		cout << data.Get() << " is a single figure" << endl;
	}
	else
	{
		cout << data.Get() << " is not a single figure" << endl;
	}


}


void ExecKnock40(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");

	if (data.Get() % 2 == 0)
	{
		cout << data.Get() << " is even" << endl;
	}
	else
	{
		cout << data.Get() << " is odd" << endl;
	}

}

void ExecKnock39(void)
{
	int Array[] = { 3,7,0,8,4,1,9,6,5,2 };
	for (int i = 0; i < 9; i++)
	{
		cout << Array[i] - Array[i + 1] << endl;
	}

}

void ExecKnock38(void)
{
	int Array[] = { 3,7,0,8,4,1,9,6,5,2 };
	int first = 0;
	for (int i = 0;i < 10;i++)
	{
		cout << Array[first] << endl;
		first = Array[first];
	}

}

void ExecKnock37(void)
{
	int Array[] = { 3,7,0,8,4,1,9,6,5,2 };
	CDataMng data;
	data.SafetyInputData("input number: ");

	cout << "value = " << Array[Array[data.Get()]] << endl;

}

void ExecKnock36(void)
{
	int Array[] = { 3,7,0,8,4,1,9,6,5,2 };
	CDataMng data1, data2;
	data1.SafetyInputData("input 1st value: ");
	data2.SafetyInputData("input 2nd value: ");

	cout << data1.Get() << " * " << data2.Get() << " = " << Array[data1.Get()] * Array[data2.Get()] << endl;
}

void ExecKnock35(void)
{
	int Array[] = { 3,7,0,8,4,1,9,6,5,2 };
	CDataMng data;
	data.SafetyInputData("input number: ");

	cout << "Array[" << data.Get() << "] = " << Array[data.Get()] << endl;


}

void ExecKnock34(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	for (int i = 1;i <= 9;i++)
	{
		if ((i != data.Get()) && (i != (data.Get() + 1)))
		{
			cout << i << endl;
		}
	}
}

void ExecKnock33(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");

	for (int i = 1;i <= 9;i++)
	{
		if (i != data.Get())
		{
			cout << i << endl;
		}
	}

}

void ExecKnock32(void)
{
	for (int i = 1;i <= 20;i++)
	{
		if (i % 5 == 0)
		{
			cout << "bar" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
}

void ExecKnock31(void)
{
	static const int num = 5;
	CDataMng data;
	data.SafetyInputData("input number: ");
	int x5 = data.Get() / num;
	for (int i = 0;i < x5;i++)
	{
		cout << "***** ";
	}
	x5 = data.Get() % num;
	for (int i = 0;i < x5;i++)
	{
		cout << "*";
	}


}

void ExecKnock30(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	for (int i = 0;i < data.Get();i++)
	{
		cout << "*";
	}

}

void ExecKnock29(void)
{
	static const int repettime = 5;
	CDataMng data;
	int sum = 0;
	for (int i = 0; i < repettime;i++)
	{
		sum += data.SafetyInputData("input number: ");
	}
	cout << sum;
}


void ExecKnock28(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if (data.Get() > 0)
	{
		int factorial = 1;
		for (int i = 1;i <= data.Get();i++)
		{
			factorial *= i;
		}
		cout << factorial;
	}
	else
	{
		cout << "1";
	}
}

void ExecKnock27(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if (data.Get() > 0)
	{
		int sum = 0;
		for (int i = 0;i <= data.Get();i++)
		{
			sum += i;
		}
		cout << sum;
	}
}


void ExecKnock26(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	switch (data.Get())
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
	if (data.Get() < -10)
	{
		cout << "range 1";
	}
	else if (data.Get() >= 0)
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
	if ((data.Get() >= -10) && (data.Get() < 0))
	{
		cout << "OK";
	}
	else if (data.Get() >= 10)
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
	if ((data.Get() >= -5) && (data.Get() < 10))
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
	if ((data.Get() <= -10) || (data.Get() >= 10))
	{
		cout << "OK";
	}

}


void ExecKnock21(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if ((data.Get() > 5) && (data.Get() < 20))
	{
		cout << "OK";
	}

}

void ExecKnock20(void)
{
	CDataMng data1, data2;
	data1.SafetyInputData("input 1st value: ");
	data2.SafetyInputData("input 2nd value: ");

	int result1 = data1.Get() / data2.Get();
	cout << "result: " << result1 << endl;
	cout << "result: " << result1 * data2.Get() << endl;


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
		Array[i] = data.Get();
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

		if (data.Get() == 0) {
			break;
		}
	}
}

void ExecKnock15(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	int EndNum = data.Get();
	for (int i = 0; i <= EndNum;i += 2)
	{
		cout << i << endl;
	}

}

void ExecKnock14(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	int FirstNum = data.Get();
	for (int i = FirstNum; i >= 0;i--)
	{
		cout << i << endl;
	}

}

void ExecKnock13(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	int EndNum = data.Get();
	for (int i = 0; i <= EndNum;i++)
	{
		cout << i << endl;
	}

}

void ExecKnock12(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	int RepeatNum = data.Get();
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
	cout << "absolute value is " << abs(data.Get()) << endl;
}

void ExecKnock09(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if (data.Get() > 0)
	{
		cout << "positive" << endl;
	}
	else if (data.Get() < 0)
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
	if (data.Get() > 0)
	{
		cout << "positive" << endl;
	}
}

void ExecKnock07(void)
{
	CDataMng data;
	data.SafetyInputData("input number: ");
	if (data.Get() == 0)
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
	if (data.Get() == 0)
	{
		cout << "zero" << endl;
	}
}

void ExecKnock05(void)
{
	CDataMng data1, data2;
	data1.SafetyInputData("input 1st number: ");
	data2.SafetyInputData("input 2ns number: ");

	cout << "和: " << data1.Get() + data2.Get() << endl;
	cout << "差: " << data1.Get() - data2.Get() << endl;
	cout << "積: " << data1.Get() * data2.Get() << endl;
	cout << "商: " << data1.Get() / data2.Get() << "余り: " << data1.Get() % data2.Get() << endl;
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

