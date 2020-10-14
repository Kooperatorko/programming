#include <iostream>

int main()
{
	using namespace std;
	double a, b, c, d, res;
	cout << "Determining the arithmetic mean.\n";
	cout << "Enter the first number: "; cin >> a;
	cout << "Enter the second number: "; cin >> b;
	cout << "Enter the third number: "; cin >> c;
	cout << "Enter the fourth number: "; cin >> d;
	res = a + b + c + d;
	res /= 4;
	cout << "Arithmetic mean of numbers: " << res << endl;
	return 0;
}