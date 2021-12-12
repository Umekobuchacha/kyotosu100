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
			cout << "��������͂��Ă�������:";
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

void CManyDataMng::InputData()
{
	// �f�[�^�̌���ǂݍ���
	scanf_s("%d", &m_numData);

	// �{���́A�����Ńf�[�^�̌����`�F�b�N����K�v�����邪�ȗ�

	// �f�[�^�̌������J��Ԃ��ăf�[�^��ǂݍ���
	for (int i = 0; i < m_numData; i++)
	{
		scanf_s("%d", &m_data[i]);
	}
}

void CManyDataMng::GetData(int* data)
{
	memcpy(data, m_data, ArraySize);
}

int CManyDataMng::GetMax()
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

int CManyDataMng::GetMin()
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
