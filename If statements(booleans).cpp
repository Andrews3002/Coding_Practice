#include <iostream>

using namespace std;

int main ()
{
	bool isMale = false;
	bool isTall = false;
	
	if (isMale && isTall){
		cout << "You are a tall male";
	} else if (isMale && !isTall){
		cout << "You are a short male";
	} else if (!isMale && isTall){
		cout << "Youre are a tall female";
	} else {
		cout << "Youre a short a female ";
	}
	return 0;
}
