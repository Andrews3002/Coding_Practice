#include <iostream>
#include <cmath>			// this allows me to use pre programmed mathematical functions

using namespace std;

int main ()
{
	double Age, Unitime;
	string Name; 
	string Job;
	cout << "Welcome to the University of Graze Feild" << endl;
	cout << "Enter your name: ";
	getline(cin, Name);
	cout << "What is your target Career?: ";
	getline(cin, Job);
	cout << "Enter your age: ";
	cin >> Age;
	
	Age += 3;
	Unitime = Age+4;
	
	cout << "Congradulations " << Name << ". We are happy to inform you that you have been accepted at our instituition to persue courses that should lead to you becoming a/an " << Job << ".\n" << " After attending our institution you be able to leave with a degree at " << Age << " years old, or worst case scenario "<< Unitime << " years old.\n" << " We look foward to your acceptance have a great day" << endl;
	
	return 0;
}
