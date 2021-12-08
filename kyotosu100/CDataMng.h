#pragma once
#include "Common.h"
class CDataMng
{
public:
	CDataMng(void) : m_data(0) { }
	int SafetyInputData(const char* outputtxt);
	int Get(void);

private:
	int m_data;


};

