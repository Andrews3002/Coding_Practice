#include <iostream>

using namespace std;

void function(string name, int age, double income) {														//void function which does not return a value
	cout << "Hello " << name << " you are " << age << " years old and your income is $" << income << endl;	//the function can be made after the main function but the heading for the void function along with its parameters must be stated above
}

int main ()
{
	function("Alex", 19, 0.00);
	function("Pete", 32, 45.00);
	function("Luke", 89, 5.00);
	function("Polly", 6, 67.00);
	function("Luther", 23, 90.00);
	function("Triston", 21, 56.00);
	
	return 0;
}
