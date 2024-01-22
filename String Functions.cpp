#include <iostream>

using namespace std;

int main ()
{
	string Name = "Alexangelo Andrews";
	cout << Name.length() << endl;  					//outputs the number characters in the string
	cout << Name [2] << endl; 							//outputs a specific character in the string based on its order starting from 0 
	cout << Name << endl;			
	Name [9] = 'a';              						//reasigns the value of a particular charcater in the string based on its numeric number from 0
	cout << Name << endl;
	cout << Name.find("And",0) << endl;					//finds a particular character in the string and tells you the numeric value by which this phrase or character starts
	cout << Name[11] << Name[12] << Name[13] << endl;	
	cout << Name.substr(9, 4);							//outputs characters in a string based of the perimeters of which number it starts and the number of following characters you would like to display
	
	return 0;
}
