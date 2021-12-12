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

class CRedirectDataMng
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

class CArrayDataMng
{
public:
	CArrayDataMng(int size) { m_ArraySize = size; }

private:
	static const int MaxSize = 100;
	int m_ArraySize;
	int m_ArrayData[MaxSize];

public:
	void SafetyInputData(const char* outputtxt);
	int GetArraySize() { return m_ArraySize; }
	int GetArrayData(int num) { return m_ArrayData[num]; }
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