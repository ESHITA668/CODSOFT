#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int number, guess, tries = 0;
	srand(time(0)); 
	number = rand() % 100 + 1; 
	cout << "Guess a Number what i written Game\n\n";

	do
	{
		cout << "Enter a guess number between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > number)
			cout << "it is Too high!\n\n";
		else if (guess < number)
			cout << "it is Too low!\n\n";
		else
			cout << "\nCorrect! You got it  " << tries << " guesses!\n";
	} while (guess != number);

	return 0;
}

