#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Environment
{
private:
vector<string> env;


public:
Environment();
vector<string> getEnvironment();
void toString();
};