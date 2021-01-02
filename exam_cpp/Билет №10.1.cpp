/*Написать класс, содержащий метод, рассчитывающий и выводящий каждый элемент в ряде,
каждый элемент которого вычисляется как сумма трех предыдущих чисел. Выведите первые
10 элементов такого ряда. Показать пример использования реализованного класса.*/

#include <iostream>

using namespace std;

class ItemNumbers
{
public: static void print(int a[10])
{
	cin >> a[1];
	cin >> a[2];
	cin >> a[3];
	for (int i = 4; i < 10; i++)
	{
		a[i] = a[i - 3] + a[i - 2] + a[i - 1];
		cout << a[i] << "\n";
	}
}
};

int main()
{
	cout << "Item numbers:\n";
	int a[10];
	ItemNumbers::print(a);
}
