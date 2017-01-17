#include "Environment.h"


/**
* 	Constructor for the Environment class.
*	@param none
*	@return none
*/

Environment::Environment()
{
	//Head is drawn at 6th line
	//Torso (line 7 and 8) and arms are drawn at 7th line.
	//Legs drawn on 9th line
	//Guessed letters go on line 14
	//Answers go on line 17
	env.push_back("/////////////////////////////////////////////////////\n");
	env.push_back("//\n");
	env.push_back("//\n");
	env.push_back("//		///////////////\n");
	env.push_back("//		//       | \n");
	env.push_back("//		//       O \n");
	env.push_back("//		//      /|\\\n");
	env.push_back("//		//       |\n");
	env.push_back("//		//      / \\\n");
	env.push_back("//		//\n");
	env.push_back("//		/////////////////\n");
	env.push_back("/////////////////////////////////////////////////////\n");
	env.push_back("//\n");
	env.push_back("//	Guessed Letters:\n");
	env.push_back("//\n");
	env.push_back("//\n");
	env.push_back("//	Answer:\n");
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

/**
*	Format the environment and print it.
*	@param none
*	@return none
*/
void Environment::toString()
{
	for(int i = 0; i < this->env.size(); i++)
	{
		cout << env[i];
	}
}