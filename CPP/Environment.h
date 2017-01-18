#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class Environment
{

private:
vector<string> env;
int incorrectGuesses;

public:
Environment();
vector<string> getEnvironment();
string toString();
void setSecretWord(string secretWord);
void addPartToHangman();
int getNumberIncorrectGuesses();
};