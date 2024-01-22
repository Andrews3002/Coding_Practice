#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	cout << 67.999 << endl;
	cout << 5+7 << endl;
	cout << 10%3 << endl; 				//outputs the remainder after the first number has been divivded by the second number
	
	int wnum = 5;
	double decnum = 5.77;
	wnum++;								//adds a value of 1 to the variable
	decnum++;							
	cout << wnum << endl;
	cout << decnum << endl;	
	wnum--;								//subtracts a value of 1 from the variable
	decnum--;
	cout << wnum << endl;
	cout << decnum << endl;
	wnum += 100;						//adds a value of whichever numeric value you chose to the variable
	cout << wnum << endl;
	wnum -= 100;						//subtracts a value of whichever numeric value you chose from the variable
	cout << wnum << endl;
	
	cout << pow(9, 2) << endl;			//raises the first number/or variable to the power of the second/variable				
	cout << sqrt(144) << endl;			//finds the sqaure root of a particular number or variable
	cout << round (4.8972) << endl; 	//rounds off the number or variable specified
	
	cout << ceil(0.176) << endl;		//rounds the number or variable stated up to the nearest whole number no matter the value
	cout << ceil(5.8) << endl;			
	cout << floor(5.1) << endl;			//rounds the number or variable stated down to the nearest whole number no matter the value
	cout << floor(5.8) << endl;
	cout << fmax(7, 6) << endl;			//outputs the larges number from the values given			
	cout << fmax(4, 8) << endl;
	cout << fmin(2, 6) << endl;			//outputs the smalles number from the values given
	cout << fmin (1, 5) << endl;
	
	
	
	return 0;
}
