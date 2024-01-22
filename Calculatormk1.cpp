#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double num, num2, solution;
	string op=".";
	cout << "Enter your problem using the operations below" << endl;
	cout << "OPERATIONS: (+ for addition), ( - for subtraction), (/ for division), (x for multiplication), (= to end your problem)" << endl << endl;

	cout << "Number		";
	cin >> num;
	solution = num;
	

	while (op != "=")
	{
		cout << "Operation	";
		cin >> op;
		if (op != "=")
		{
			cout << "Number		";
			cin >> num2;
		}
		
		if (op == "+")
		{
			solution = solution + num2;
		}
		else if (op == "-")
		{
			solution = solution - num2;
		}
		else if (op == "/")
		{
			solution = solution / num2;
		}
		else if (op == "x")
		{
			solution = solution * num2;
		}
		else
		{
			solution = solution;
		}
	}
	cout << "-----------------------" << endl;
	cout << "Answer		" << solution << endl;
	cout << "-----------------------" << endl;
	 
	return 0;
}
