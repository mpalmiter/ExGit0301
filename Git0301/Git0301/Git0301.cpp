// Git0301.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>
#include <time.h>
using namespace std;

string randomWord();
string mixUp(const string& aWord);
void welcomePlayer(const string& aJumble);
void play(const string&aWord);


int main() // Maggie's
{
	srand(static_cast<unsigned int>(time(0)));

	string word = randomWord();
	string jumble = mixUp(word);
	welcomePlayer(jumble);
	play(word);
	//sakdjfhaslkdjfhl

	system("Pause");
	return 0;
}





string randomWord() // Maggie's 
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

string mixUp(const string& aWord)
{
	return string();
}

void welcomePlayer(const string& aJumble)
{

}


//play the game
void play(const string& aWord)  // John's
{
	string guess;
	do
	{
		cout << endl << endl << "Your guess: ";
		cin >> guess;

		if ((guess != aWord) && (guess != "quit"))
		{
			cout << "Sorry, that's not it.";
		}
	} while ((guess != aWord) && (guess != "quit"));
	if (guess == aWord)
		cout << endl << "That's it! You guessed it!" << endl;
	cout << endl << "Thanks for playing. \n" << endl;
}


