#include <iostream>

using namespace std;

int main ()
{
	double length, width, area, perimeter;
	
	cout << "                   length         " << endl;
	cout << "       _____________________________" << endl;
	cout << "      |                             |" << endl;
	cout << "      |                             |" << endl;
	cout << "      |                             |" << endl;
	cout << "width |                             |" << endl;
	cout << "      |                             |" << endl;
	cout << "      |                             |" << endl;
	cout << "      |_____________________________|" << endl << endl << endl;
	
	cout << "Enter a value for the length of the rectangle above: ";
	cin >> length;
	cout << endl;
	cout << "Enter a value for the width of the rectangle above: ";
	cin >> width;
	cout << endl;
	
	area = length*width;
	perimeter = (2*length)+(2*width); 
	
	cout << "  ____________"<< perimeter <<"______________ " << endl;
	cout << " |                             |" << endl;
	cout << " |                             |" << endl;
	cout << " |                             |" << endl;
	cout << " |            "<< area <<"              |" << endl;
	cout << " |                             |" << endl;
	cout << " |                             |" << endl;
	cout << " |_____________________________|" << endl << endl << endl;
	
	cout << "The perimeter of the rectangle is " << perimeter << endl << endl;
	cout << "The area of the rectangle is " << area << endl << endl;
	

	
	return 0;
}
