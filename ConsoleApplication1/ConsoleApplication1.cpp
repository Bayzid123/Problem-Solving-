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

// Calculating Function

/*#include<iostream>
using namespace std;
int main()
{
	long long a, b;
	cin >> a;
	if (a % 2 == 0) {
		b = a / 2;
	}
	else {
		b = ((a + 1) / 2) * (-1);
	}
	cout << b;
}*/

// Ultra-Fast Mathematician

/*#include<iostream>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	for (size_t i = 0;i < s1.length();++i) {
		if (s1[i] == s2[i]) {
			s1[i] = '0';
		}
		else {
			s1[i] = '1';
		}
	}
	cout << s1;
}*/

// Drinks

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b[100];
	double res=0.0, sum = 0.0;
	cin >> a;
	for (int i = 0;i < a;i++) {
		cin >> b[i];
		sum += b[i];
	}
	res = sum / a;
	cout <<fixed<< setprecision(12)<<res;
}*/

// Hulk

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 0;i < a;i++) {
		if (i % 2 == 0) {
			cout << "I hate ";
		}
		else {
			cout << "I love ";
		}
		if (i != a - 1) {
			cout << "that ";
		}
		else {
			cout << "it ";
		}
	}
}*/

// Is your horseshoe on the other hoof?

/*#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[4], count = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 4);
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			count++;
		}
	}
	cout << count;
}*/

// addition upto n--1+2+....+n
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i <= n;i++) {
		
		sum += i;
	}
	cout << sum;
}