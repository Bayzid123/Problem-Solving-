//Beautiful Year

/*#include<iostream>
using namespace std;
int main() {
	int year, num1, num2, num3, num4;
	cin >> year;
	while (true)
	{
		year = year + 1;
		num1 = year / 1000;
		num2 = year / 100 % 10;
		num3 = year / 10 % 10;
		num4 = year % 10;

		if (num1 != num2 && num1 != num3 && num1 != num4
			&& num2 != num3 && num2 != num4 && num3 != num4)
		{
			break;
		}
	}

	cout << year;
	return 0;
}*/

//Vanya and Fence

/*#include<iostream>
using namespace std;
int main() {
	int a,b,c,sum=0;
	cin >> a>>b;
	for (int i = 0;i < a;i++) {
		cin >> c;
		if (c > b) {
			sum++;
		}
		sum++;
	}
	cout << sum;
}*/

//Georgeand Accommodation


#include<iostream>
using namespace std;
int main() {
	int a, people, capacity, res=0;
	cin >> a;
	while (a--) {
		cin >> people >> capacity;
		if(capacity - people >= 2) {
			res++;
		}
	}
	cout << res;
}