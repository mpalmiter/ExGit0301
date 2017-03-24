// Git0301.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>
<<<<<<< HEAD
using namespace std;


int main()
{
	cout << "Hello World!\n";
	system("pause");
	return 0;
}

//play the game
void play(const string& aWord)
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

//awegfiag
=======
#include <time.h>
using namespace std;

string randomWord();
string mixUp(const string& aWord);
void welcomePlayer(const string& aJumble);
void play(const string&aWord);


int main()
{
	srand(static_cast<unsigned int>(time(0)));

	string word = randomWord();
	/*string jumble = mixUp(word);
	welcomePlayer(jumble);
	play(word);*/
	//sakdjfhaslkdjfhl

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

>>>>>>> 5c11175b95dd3e58b8fb95252c05dc8e446d7b27
