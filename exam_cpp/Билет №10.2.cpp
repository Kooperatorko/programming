/*Написать класс, содержащий метод, рассчитывающий и выводящий каждый элемент в ряде,
каждый элемент которого вычисляется как сумма трех предыдущих чисел. Выведите первые
10 элементов такого ряда. Показать пример использования реализованного класса.*/

#include <iostream>

using namespace std;

class ItemNumbers 
{
public: static void print(int a[200]) 
{
	int k = 1; 
	for (int i = 4; i < 200; i++)
	{
		if (a[i] == (a[i - 3] + a[i - 2] + a[i - 1]))
		{
			cout << k << ") " << a[i - 3] << " + " << a[i - 2] << " + " << a[i - 1] << " = " << a[i] << "\n";
			k = k + 1;
			if (k == 11) break;
		}
	}
}
};

int main()
{
	cout << "Item numbers.\n\n"; 
	int a[200];
	for (int i = 0; i < 200; i++) 
	{
		a[i] = rand() % 11 - 5;
		if ((i % 20 == 0) && (i != 0))
		{
			cout << "[" << a[i] << "] " << "\n";
		}
		else cout << "[" << a[i] << "] ";
	}
	cout << "\n\n";
	ItemNumbers::print(a);
}
