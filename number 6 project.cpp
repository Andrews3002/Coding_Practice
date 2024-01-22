#include <iostream>

using namespace std;

int main ()
{
	string name, country;
	int age;
	
	cout << "Hi! What is your name? ";
	getline(cin, name);
	cout << "Welcome to C++ programming, " << name << "!" << endl << endl;
	
	cout << "So, " << name << ", where are you from? ";
	getline(cin, country); 																		//try to get this second getline to work (so far it only works when I put all getline fuctions next to eachother)
	cout << "I have heard that " << country << " is a beautiful place" << end << endl;
	
	cout << "How old are you, " << name << "? ";
	cin >> age;
	cout << age << ". Wow! you are on your way to being a great programmer!" << endl << endl;
	

	
	return 0;
}
