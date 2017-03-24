// Git0301.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{
	cout << "Hello World!\n";
	system("pause");
	return 0;
}

void welcomePlayer(const string& aJumble)
{
	cout << "Welcome to the Jumble Game!\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'quit' to quit the game.\n";
	cout << "The jumbled word is: " << aJumble << endl << endl;
}
