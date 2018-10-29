#include <string>
#pragma once
using namespace std;

struct Result
{
	float  Result;
	bool   Error;
	string   Message;
};

class Expression
{
public:
	Expression();
	enum MyActions
	{
		ADD,
		SUB,
		MULTI,
		DIV,

	};

	~Expression();
public:
	void SetFirstNumber(float number);
	void SetSecondNumber(float number);
	float GetFirstNumber();
	float GetSecondNumber();
	void SetSign(MyActions sign);
	MyActions GetSign();
	Result& GetResult();
private:
	float FirstNumber;
	float SecondNumber;
	MyActions Sign;
	Result Result;


};


