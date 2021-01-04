#include <iostream>
using namespace std;

int main()
{
	struct SAM
	{
		char Name[30];
		char MPhoneNum[20];
	};

	struct SAM Friend, Friend1;

	strcpy_s(Friend.Name, 30, "맨슥이");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5678");

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;
}