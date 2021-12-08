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
			cout << "®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:";
			cin.clear();
			cin.seekg(0);
			continue;
		}
		break;
	}
	return m_data;
}

int CDataMng::GetData(void)
{
	return m_data;
}
