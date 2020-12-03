#include <iostream>
#include <string>
using namespace std;

class Character
{
private:

	string nickname;
	string klass;
	int level;

public:

	Character(string onetwo)
	{
		cout << onetwo << endl;
	}
	Character(string nickname, string klass, int level)
	{
		this->nickname = nickname;
		this->klass = klass;
		this->level = level;
	}
	void Disp()
	{
		cout << "Nickname: " << nickname << "\n"
			<< "Klass: " << klass << "\n"
			<< "Level: " << level << "\n" << endl;
	}
};

int main()
{
	Character rav1("The fist character of the game: ");
	Character var1("Himkek", "University", 100);
	var1.Disp();
	Character rav2("The second character of the game: ");
	Character var2("Kooperator", "Person", 101);
	var2.Disp();
	return 0;
}
