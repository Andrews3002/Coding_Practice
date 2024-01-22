#include<iostream>
#include<cmath>

using namespace std;

int numOfDigits(int n)
{
	int digits = 1;
	int quot;
	
	quot = n/10;
	 
	
	while (quot != 0)
	{
		digits++;
		n = quot;
		quot = n/10;
	}
	
	return digits;
}

void intToString(int n, char s[])
{
	int digits, divider, digit;
	
	digits = numOfDigits(n);
	
	int i = 0;

while (n != 0)
	{
		divider = pow(10, (digits-1));
		//cout << "10^(" << digits <<"-1) = " << divider<< endl;
		digit = n/divider;
		//cout << n <<"/" << divider << " = " << digit << endl;
		n = n % divider;
		//cout << "new value of n = " << n << endl;
		digits = digits-1;
		//cout << "digits = "  << digits << endl;
		s[i] = digit + 48;
		//cout << "s[" << i << "] = " << s[i] << endl;
		i++;
		//cout << endl << endl;		
	}
	
	s[i] = NULL;
	
	i = 0;
	while (s[i] != NULL)
	{
		cout<< s[i] << " ";
		i++;	
	}
}

int main()
{	
	int n, d;
	
	cout << "Input value for n: ";
	cin >> n;
	
	d = numOfDigits(n);
	
	char s[d];
	
	cout << s << endl;

	intToString(n, s);
	
	return 0;
}
