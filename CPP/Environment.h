#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class Environment
{

private:
    vector<char> guessedLetters;
    vector<string> env;
    int incorrectGuesses;
    void addPartToHangman();
    void setSecretWord(string secretWord);
    vector<string> getEnvironment();

public:
    Environment(string secretWord);
    string toString();
    int getNumberIncorrectGuesses();
};