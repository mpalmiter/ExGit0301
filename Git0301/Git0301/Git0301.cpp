// Git0301.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>
#include <time.h>
using namespace std;



int main()
{
	srand(static_cast<unsigned int>(time(0)));

	string word = randomWord();
	string jumble = mixUp(word);
	welcomePlayer(jumble);
	play(word);

	system("Pause");
	return 0;
}

string randomWord()
{
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS] =
	{
		"wall",
		"glass",
		"party",
		"strawberry",
		"animal",
	};
	
	int choice = (rand() % NUM_WORDS);
	string word = WORDS[choice];

	return word;
}

