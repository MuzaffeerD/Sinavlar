#include <iostream>

using namespace std;

int main()

{
string str = "evrim ersin kangal";
char checkCharacter = 'a' ;
int count = 0;
for (int i = 0; i < str.size(); i++)
{
if (str[i] ==  checkCharacter)
{
++ count;
}
}
	cout << count << " tane " << checkCharacter <<" vardir" ;
	return 0;
	
}
