#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//task 1 --> трохи не зрозуміла завдання
	//task 2
	/*Написати гру «Кубики».Користувач і комп'ютер по черзі кидають 2 кубики. Переможець той, у кого
		за результатами 3х кидків сума більше.Передбачити
		красивий інтерфейс гри.*/

	cout << "Game start :: " << endl;

	int win1 = 0;
	int win2 = 0;

	srand(time(0));
	for (size_t i = 0; i < 3; i++)
	{
		int randomNumberComputer1 = rand() % 6 + 1;
		int randomNumberComputer2 = rand() % 6 + 1;
		int sum = randomNumberComputer1 + randomNumberComputer2;
		cout << "Computer --> " << sum << endl;
		win1 += sum;
	}

	cout << "------------------------------" << endl;

	for (size_t i = 0; i < 3; i++)
	{
		int randomNumberPerson1 = rand() % 6 + 1;
		int randomNumberPerson2 = rand() % 6 + 1;
		int sum = randomNumberPerson1 + randomNumberPerson2;
		cout << "Person --> " << sum << endl;
		win2 += sum;
	}

	cout << "------------------------------" << endl;

	cout << "Computer total: " << win1 << endl;
	cout << "Person total:   " << win2 << endl;

	if (win1 > win2) {
		cout << "Computer win(((" << endl;
	}
	else if (win1 == win2)
	{
		cout << "Matched game" << endl;
	}
	else {
		cout << "Congratulations!!! You win!!" << endl;
	}
}