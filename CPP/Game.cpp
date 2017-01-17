#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <boost/algorithm/string.hpp>
#include "Environment.h"

const int NUMBER_WORDS_IN_HANGMAN_FILE = 854;
/**
*	This function takes string input from the user and verifies if it is valid input to determine 
*	if the game should begin or not.
*
* 	@param string - input - Value taken by program from user to verify if it is formatted correctly.
*		A correct format will have either a 'Y' or a 'N', and nothing else.
*	@return True if it is valid input.
*	@return False if it is invalid input.
*	@return Exit if player should decide not to play the game (by entering 'N').
*/
bool checkBeginGameInput(string input)
{
	if(input.length() != 1)
	{
		cout << "Incorrect usage. Please enter only \'Y\' or \'N\'" << endl;
		return false;	
	}
	else if(input.compare("Y") == 0)
	{
		return true;
	}
	else if(input.compare("N") == 0)
	{
		cout <<"Ok, Goodbye!" << endl;
		exit(0);	
	}
	else
	{
		cout << "Incorrect usage. Please enter only \'Y\' or \'N\'" << endl;
		return false;
	}
}


int main()
{
	Environment env;
	srand(time(NULL));
	int randomNumber = rand() % NUMBER_WORDS_IN_HANGMAN_FILE;

	string secretWord = getRandomWord(randomNumber);
	cout << "Welcome to Hangman. This program was brought to you by Evan Kivolowitz as a way to learn C++." << endl;
	env.toString();

	
	while(true)
	{
		cout << "Do you want to play? \n(Y or N): ";
		string play;
		cin >> play;
		if(checkBeginGameInput(play)) break;	
	}

}