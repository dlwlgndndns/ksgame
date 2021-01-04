#include <iostream>
using namespace std;
int main()
{
	char jumin[30] = { 0, };
	char year[5] = { 0, }, month[3] = { 0, }, day[3] = { 0, };

	cout << "주민번호 입력 : ";
	cin >> jumin;

	if (jumin[7] == '1' || jumin[7] == '2')
		strcpy_s(year, _countof(year), "19");
	else
		strcpy_s(year, _countof(year), "20");

	strncat_s(year, _countof(year), jumin, 2);
	strncpy_s(month, _countof(month), jumin + 2, 2);
	strncpy_s(day, _countof(day), jumin + 4, 2);

	cout << "당신은" << year << "년" << month << "월" << day << "일 입니다." << endl;

}