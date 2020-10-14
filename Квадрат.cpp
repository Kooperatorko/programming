#include <iostream>

int main()
{
	using namespace std;
	cout << "Square: " << endl;
	for (int x = 0;x < 10;x++)
	{
		for (int y = 0;y < 10;y++)
		{
			if ((x == 0) || (x == (10 - 1)) || (y == 0) || (y == (10 - 1)))
			{
				cout << "||";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}