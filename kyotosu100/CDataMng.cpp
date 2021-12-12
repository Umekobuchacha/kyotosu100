#include "CDataMng.h"
using namespace std;
int CDataMng::SafetyInputData(const char* outputtxt)
{
	cout << outputtxt;
	cin.exceptions(ios::failbit);
	while (1)
	{
		try {
			cin >> m_data;
		}
		catch (...)
		{
			cout << "整数を入力してください:";
			cin.clear();
			cin.seekg(0);
			continue;
		}
		break;
	}
	return m_data;
}

int CDataMng::Get(void)
{
	return m_data;
}

void CRedirectDataMng::InputData()
{
	// データの個数を読み込む
	scanf_s("%d", &m_numData);

	// 本当は、ここでデータの個数をチェックする必要があるが省略

	// データの個数だけ繰り返してデータを読み込む
	for (int i = 0; i < m_numData; i++)
	{
		scanf_s("%d", &m_data[i]);
	}
}

void CRedirectDataMng::GetData(int* data)
{
	memcpy(data, m_data, ArraySize);
}

int CRedirectDataMng::GetMax()
{
	int max = 0;
	for (int i = 0;i < m_numData;i++)
	{
		if (m_data[i] > max)
		{
			max = m_data[i];
		}
	}
	return max;
}

int CRedirectDataMng::GetMin()
{
	int min = m_data[0];
	for (int i = 0;i < m_numData;i++)
	{
		if (m_data[i] < min)
		{
			min = m_data[i];
		}
	}
	return min;
}

void CTestScore::InputData()
{
	cin >> m_numData;

	for (int i = 0; i < m_numData;i++)
	{
		cin >> Score[eEnglish][i] >> Score[eMath][i] >> Score[eJapanese][i];
	}

}

int CTestScore::GetAverage(eSubject sub)
{
	int ave = 0;
	for (int i = 0; i < m_numData;i++)
	{
		ave += Score[sub][i];
	}

	return ave / m_numData;

}

void CArrayDataMng::SafetyInputData(const char * outputtxt)
{
	cin.exceptions(ios::failbit);
	for (int i = 0;i < m_ArraySize;i++) {
		cout << outputtxt << "[" << i << "]: ";
		while (1)
		{
			try {
				cin >> m_ArrayData[i];
			}
			catch (...)
			{
				cout << "整数を入力してください:";
				cin.clear();
				cin.seekg(0);
				continue;
			}
			break;
		}
	}
}
