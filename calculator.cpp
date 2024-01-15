#include "calculator.h"

double calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
		case'+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/' or ':':
			return x / y;
		default:
			return 0.0;
	}
}
