#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double yvalue, xvalue, a, b;
	
	cout << "Enter y value = ";
	cin >> yvalue;
	
	a = pow(yvalue, 3);
	b = pow(yvalue, 2);
	xvalue = (3*a)-(7*b)+(5*yvalue)-8;
	
	cout << "The x value is = " << xvalue;
	return 0;
}
