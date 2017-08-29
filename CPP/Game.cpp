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



/**
*	This function is used in main to get a random word to create the game on. 
*	@param randomNumber - integer between 1 and 854 (NUMBER_WORDS_IN_HANGMAN_FILE)/
*	@return String - random word from file on line number randomNumber.
*	@return NULL if for some reason randomNumber was out of range 1 -> 854
*/
string getRandomWord(int randomNumber)
{
	ifstream myFile;
	myFile.open("hangman_words.txt");
	for(int i = 0; i < NUMBER_WORDS_IN_HANGMAN_FILE; i++)
	{
		if(i == randomNumber)
		{
			string retString;
			getline(myFile, retString);
			return retString;
		}
		else
		{
			string retString;
			getline(myFile, retString);
		}
	}
	return NULL;
}

/**
*
*	Main point of execution. 
*
*/
int main()
{
	
	srand(time(NULL));
	int randomNumber = rand() % NUMBER_WORDS_IN_HANGMAN_FILE;
	string secretWord = getRandomWord(randomNumber);
	Environment env(secretWord);
	cout << "Welcome to Hangman. This program was brought to you by Evan Kivolowitz as a way to learn C++.\n" <<  env.toString() << endl;


	//Loop to check user input to begin the game.
	while(true)
	{
		cout << "Do you want to play? \n(Y or N): ";
		string play;
		cin >> play;
		if(checkBeginGameInput(play)) break;	
	}

}