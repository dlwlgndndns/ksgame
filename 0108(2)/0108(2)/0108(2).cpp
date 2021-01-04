#include <iostream>
using namespace std;

int main()
{
	char string[30] = "computer";
	int i = 0;

	cout << string << endl;

	for (i = 8; i <= 0; i--)
		cout << string[i];

	cout << endl;

	return 0;
}