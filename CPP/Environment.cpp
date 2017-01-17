#include "Environment.h"

Environment::Environment()
{

//Head is drawn at 6th line
//Torso (line 7 and 8) and arms are drawn at 7th line.
//Legs drawn on 9th line
//Guessed letters go on line 14
//Answers go on line 17
	env = "/////////////////////////////////////////////////////\n\
//\n\
//\n\
//		///////////////\n\
//		//       | \n\
//		//       O \n\
//		//      /|\\\n\
//		//       |\n\
//		//      / \\\n\
//		//\n\
//		/////////////////\n\
/////////////////////////////////////////////////////\n\
//\n\
//	Guessed Letters:\n\
//\n\
//\n\
//	Answer:\n\
//\n\
/////////////////////////////////////////////////////\n";
}

string Environment::getEnvironment()
{
	return this->env;
}