#include <iostream>

using namespace std;

int main ()
{
	double array[100] {6, 7, 13, 67, 8, 97}; //an array which can store multiple values as apposed to the variable which can only store 1 value
	
	array[20] = 87;
	
	cout << array[20] << endl;
	cout << array[0] << endl;
	cout << array[4] << endl;
	cout << array[25] << endl;
	
	return 0;
}
