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


/*#include<iostream>
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
}*/

//presents

/*#include<iostream>
using namespace std;
int main() {
	int a, b, num[100];
	cin >> a;
	for (int i = 1; i <= a;i++) {
		cin >> b;
		num[b] = i;
	}
	for (int i = 1; i <= a; i++) {
		cout << num[i] << " ";
	}
}*/

//Magnets

/*#include<iostream>
using namespace std;
int main() 
{
	int a, c=0;
	cin >> a;
	int arr[100000];
	for (int i = 0; i < a; i++) 
	{
		cin >> arr[i];	
	}
	for (int i = 0;i < a;i++) {
		if (arr[i] != arr[i + 1]) {
			c++;
		}
	}
	cout << c;
}*/


// In Search of an Easy Problem

/*#include<iostream>
using namespace std;
int main() {
	int a, c=0;
	cin >> a;
	int b[100];
	for (int i = 0; i < a; i++) {
		cin >> b[i];
		if (b[i] == 1) {
			c++;
		}
	}
	if (c == 0) {
		cout << "Easy";
	}
	else {
		cout << "Hard";
	}
}*/

// Even Odds

/*#include <iostream>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	
	if (b <= (a+1)/2) {
		cout<< b * 2 - 1;
	}
	else {
		cout << (b - (a+1)/2)*2;
	}
	
}*/

