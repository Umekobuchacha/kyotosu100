#include "CDataMng.h"
using namespace std;
int CDataMng::SafetyInputData(const char* outputtxt)
{
	int data;
	cout << outputtxt;
	cin.exceptions(ios::failbit);
	while (1)
	{
		try {
			cin >> data;
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
	return data;
}
