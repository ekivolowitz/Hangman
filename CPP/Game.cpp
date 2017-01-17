#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <boost/algorithm/string.hpp>
#include "Environment.h"

const int NUMBER_WORDS_IN_HANGMAN_FILE = 854;

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

string getRandomWord(int wordLine)
{
	ifstream file("hangman_words.txt");
	for(int i = 0; i < NUMBER_WORDS_IN_HANGMAN_FILE; i++)
	{
		if(i == wordLine)
		{
			string returnString;
			getline(file, returnString);
			cout << "Line number is " << i + 1 << endl;
			cout << "Word is " << returnString << endl;
			return returnString;
		}
		else
		{
			string temp;
			getline(file, temp);
		}
	}

}


int main()
{
	Environment env;
	srand(time(NULL));
	int randomNumber = rand() % NUMBER_WORDS_IN_HANGMAN_FILE;

	string secretWord = getRandomWord(randomNumber);
	cout << "Welcome to Hangman. This program was brought to you by Evan Kivolowitz as a way to learn C++.\n\n" << env.getEnvironment() << endl;

	
	while(true)
	{
		cout << "Do you want to play? \n(Y or N): ";
		string play;
		cin >> play;
		if(checkBeginGameInput(play)) break;	
	}

}