#include "Environment.h"


/**
* 	Constructor for the Environment class.
*	@param none
*	@return none
*/

Environment::Environment()
{
	incorrectGuesses = 0;
	// env.push_back("/////////////////////////////////////////////////////\n");
	// env.push_back("//\n");
	// env.push_back("//\n");
	// env.push_back("//		///////////////\n");
	// env.push_back("//		//       | \n");
	// env.push_back("//		//       O \n");//6
	// env.push_back("//		//      /|\\\n");//7
	// env.push_back("//		//       |\n");//8
	// env.push_back("//		//      / \\\n");//9
	// env.push_back("//		//\n");
	// env.push_back("//		/////////////////\n");
	// env.push_back("/////////////////////////////////////////////////////\n");
	// env.push_back("//\n");
	// env.push_back("//	Guessed Letters:\n");//14
	// env.push_back("//\n");
	// env.push_back("//\n");
	// env.push_back("//	Answer:\n");//17
	// env.push_back("//\n");
	// env.push_back("/////////////////////////////////////////////////////\n");
	env.push_back("/////////////////////////////////////////////////////\n");
	env.push_back("//\n");
	env.push_back("//\n");
	env.push_back("//		///////////////\n");
	env.push_back("//		//\n");
	env.push_back("//		//\n");//6
	env.push_back("//		//\n");//7
	env.push_back("//		//\n");//8
	env.push_back("//		//\n");//9
	env.push_back("//		//\n");
	env.push_back("//		/////////////////\n");
	env.push_back("/////////////////////////////////////////////////////\n");
	env.push_back("//\n");
	env.push_back("//	Guessed Letters: \n");//14
	env.push_back("//\n");
	env.push_back("//\n");
	env.push_back("//	Answer: \n");//17
	env.push_back("//\n");
	env.push_back("/////////////////////////////////////////////////////\n");
}


/**
*	Return the environment vector. 
*	@param none
*	@return vector<string> of the environment.
*
*/
vector<string> Environment::getEnvironment()
{
	return env;
}


void Environment::addPartToHangman()
{
	switch(incorrectGuesses)
	{
		case 1: 
				env[6] = "//		//       O \n";
				break;
		case 2: 
				env[7] = "//		//      |\n";
				env[8] = "//		//       |\n";
				break;
		case 3:
				env[7] = env[7] = "//		//      /|\n";
				break;
		case 4:
				env[7] = "//		//      /|\\\n";
				break;
		case 5:
				env[9] = "//		//      / \n";
				break;
		case 6:
				"//		//      / \\\n";
				break;
		default: break;			 

	}
}


void Environment::setSecretWord(string secretWord)
{
	cout << secretWord << endl;
	string reString;
	string baseString = env[16].substr(0, env[16].length()-1);
	int lenSecretWord = secretWord.length();
	for(int i = 0; i < lenSecretWord; i++)
	{
		if(secretWord[i] == ' ')
		{
			reString = reString + "\t";
		}
		else
		{
			if(i == lenSecretWord - 1)
			{
				reString = reString + "_\n";
			}
			else
			{
				reString = reString + "_ ";
			}
		}
	}

	env[16] = baseString + reString;
}


/**
*
*	Return the number of incorrect guesses in the game.
*	@param none
*	@return int - the number of incorrect guesses. 
*
*/
int Environment::getNumberIncorrectGuesses()
{
	return incorrectGuesses;
}



/**
*	Format the environment and print it.
*	@param none
*	@return none
*/
string Environment::toString()
{
	string returnValue = "";
	for(int i = 0; i < this->env.size(); i++)
	{
		returnValue.append(env[i]);
	}

	return returnValue;
}