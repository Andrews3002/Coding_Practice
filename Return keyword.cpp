#include <iostream>

using namespace std;

double square(double num1)
{
	return num1*num1*num1*num1*num1;			//these can be utilized if you are looking to repeatedly use functions 
}

int main ()
{
	cout<< square (5) << endl	
		<< square (6.5) << endl
		<< square (2) << endl
		<< square (8.6) << endl
		<< square (1) << endl
		<< square (9.7); 
	
	return 0;
}
