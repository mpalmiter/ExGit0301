// Git0301.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>
using namespace std;


int main()
{
	cout << "Hello World!\n";
	system("pause");
	return 0;
}

//welcome player and explain game
void welcomePlayer(const string& aJumble)
{
	cout << "\t\t\tWelcome to Word Jumble!" << endl << endl;
	cout << "Unscramble the letters to make a word." << endl;
	cout << "The jumble is: " << aJumble;
}
// kl;fd