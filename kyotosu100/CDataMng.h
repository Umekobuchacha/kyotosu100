#pragma once
#include "Common.h"
#include <array>


class CDataMng
{
public:
	CDataMng(void) : m_data(0) { }
	int SafetyInputData(const char* outputtxt);
	int Get(void);


	bool IsEven(void) {
		return (m_data % 2) ? true : false;
	}

private:
	int m_data;
};

class CManyDataMng
{
private:
	static const int ArraySize = 100;
	int m_data[ArraySize];
	int m_numData;

public:
	void InputData();
	void GetData(int* data);
	int GetDataNum() { return m_numData; }
	int GetMax();
	int GetMin();
};

class CTestScore
{
public:
	typedef enum {
		eEnglish,
		eMath,
		eJapanese,
		eScoreMAX,
	}eSubject;

private:
	static const int ArraySize = 100;
	int Score[eScoreMAX][ArraySize];
	int m_numData;

public:
	void InputData();
	int GetAverage(eSubject sub);

};