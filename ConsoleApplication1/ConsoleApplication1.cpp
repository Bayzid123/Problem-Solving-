//A. Beautiful Year

#include<iostream>
using namespace std;
int main() {
	int year,num1,num2,num3,num4;
	cin >> year;
	while (true)
	{
		year = year + 1;
		num1 = year / 1000;
		num2 = year / 100 % 10;
		num3 = year / 10 % 10;
		num4 = year % 10;

		if (num1!=num2 && num1!=num3 && num1!=num4 
			&& num2!=num3 && num2!=num4 && num3!=num4)
		{
			break;
		}
	}

	cout << year;
	return 0;
}