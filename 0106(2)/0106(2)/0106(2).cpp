#include <iostream>
using namespace std;

int main()
{
	//char string[30] = "computer";
	char string[30] = {'c','o','m','p','u','t','e','r','\0'};
	int i = 0;

	cout << string << endl;

	for (i = 0; string[i] != '\0'; i++)
		cout << string[i];

	cout << endl;

	return 0;
}