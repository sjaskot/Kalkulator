#include "Expression.h"
#include "Assert.h"



/*Expression::Expression()
{
	Result.Result = 0;
	Result.Message = "";
	Result.Error = false;
	FirstNumber = 0;
	SecondNumber = 0;
	

}
*/
Expression::Expression()
	:FirstNumber(0),
	SecondNumber(0),
	Sign(Expression::ADD)
{
	Result.Error = false;
	Result.Message = "";
	Result.Result = 0.0;
}
Expression::~Expression()
{
}
void Expression::SetFirstNumber(float number)
{
	FirstNumber = number;
}
void Expression::SetSecondNumber(float number)
{
	SecondNumber = number;
}
float Expression::GetFirstNumber()
{
	return FirstNumber;
}
float Expression::GetSecondNumber()
{
	return SecondNumber;
}
void Expression::SetSign(MyActions sign)
{
	Sign = sign;
}
Expression::MyActions Expression::GetSign()
{
	return Sign;
}
Result& Expression::GetResult()
{
	Result.Error = false;
	Result.Message = "";

	switch (Sign)
	{
	case Expression::ADD:
		Result.Result = FirstNumber + SecondNumber;
		break;
	case Expression::SUB:
		Result.Result = FirstNumber - SecondNumber;
		break;
	case Expression::MULTI:
		Result.Result = FirstNumber * SecondNumber;
		break;
	case Expression::DIV:
		Result.Result = FirstNumber / SecondNumber;
		if (SecondNumber == 0)
		{
			Result.Error = true;
			Result.Message = "Dzielenie przez zero";
			Result.Result = 0.0;
		}
		break;
	default:
	//assert blad
		break;
	}
	return Result;
}