#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a[26][26];
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (i == j ||
                i == j + 19 ||
                i == j + 15 ||
                i == j - 19 ||
                i == j - 15 ||
                i == j + 4 ||
                i == j - 4 ||
                i == 26 - 1 - j ||
                i == 26 - 1 - (j - 19) ||
                i == 26 - 1 - (j - 15) ||
                i == 26 - 1 - (j - 4) ||
                i == 26 - 1 - (j + 19) ||
                i == 26 - 1 - (j + 15) ||
                i == 26 - 1 - (j + 4) ||
                i == 26 / 2 + 1 ||
                i == 26 / 2 - 2 ||
                j == 26 / 2 - 2 ||
                j == 26 / 2 + 1)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (a[i][j] == 0)
                cout << " " << " ";
            else
                cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}