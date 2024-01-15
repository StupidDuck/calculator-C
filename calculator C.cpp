#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    int i = 0;
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper;


    cout << "calc console application" << endl << endl;
    cout << "enter the operation in format: a+b a-b a*b a/b \n"
    << endl;

    calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "DOLBOEB\n" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }

        cout << "Result" << " of " << x << oper << y << " is " << result << endl;
    }
        
    
    return 0;
}
