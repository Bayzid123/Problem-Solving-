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
/*#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i <= n;i++) {

		sum += i;
	}
	cout << sum;
}*/

//
/*#include<bits/stdc++.h>
using namespace std;
int main() {
	int i, j;
	for (int i = 0; i <= 10;i++) {
		for(int j=0; j<=10;j++){
			cout << i * j;
		}
	}

}*/

// Taxi wrong

/*#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, sum = 0,res=0;
	int arr[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum % 4 == 0) {
		cout << sum/4;
	}
	else {
		cout << (sum/4) + 1;
	}
}*/
// Taxi Right
/*#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, s, count[5] = { 0 };
	cin >> n;
	while (n--)
	{
		cin >> s;
		count[s] += 1;
	}
	int total = count[4] + count[3] + count[2] / 2;
	count[1] -= count[3];
	if (count[2] % 2 == 1)
	{
		total += 1;
		count[1] -= 2;
	}
	if (count[1] > 0)
	{
		total += (count[1] + 3) / 4;
	}
	cout << total;
	return 0;
}*/

// Kefa and First Steps

/*#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, c=0, m=1;
	cin >> n;
	int a[100000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] >= a[i - 1]) {
			c++;
			m = max(m, c);
		}
		else {
			c = 1;
		}		
	}
	cout << m;
}*/

// Expression

/*#include<bits/stdc++.h>
using namespace std;
int main() {
	long long a, b, c, res;
	while (cin >> a >> b >> c)
	{
		res = a + b + c;
		res = max(res, (a + b) * c);
		res = max(res, (a * b * c));
		res = max(res, (a * b) + c);
		res = max(res, (b + c) * a);
		res = max(res, (b * c) + a);
		cout << res;
	}
}*/

//Gravity Flip
/*#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,arr[100];
	cin >> a;
	for (int i = 0;i < a; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + a);
	for (int i = 0; i < a; i++) {
		cout << arr[i] << " ";
	}
}*/

// I Wanna Be the Guy

/*#include<bits/stdc++.h>
using namespace std;
int main() {
	int f, p, q, arr[200], count = 0;
	cin >> f >> p;
	for (int i = 0; i < p; i++) {
		cin >> arr[i];
	}
	cin >> q;
	for (int i = p; i < p + q; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + (p + q));
	for (int i = 0; i < p + q; i++) {
		if (arr[i] != arr[i+1]) {
			count++;
		}
	}
	if (count == f) {
		cout << "I become the guy.";
	}
	else {
		cout << "Oh, my keyboard!";
	}
}*/

// cAPS lOCK

#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int c1 = 0,c2 = 0;
	cin >> s;
	for (int i = 1;i < s.size();i++) {
		if (islower(s[i])) {
			c1++;
		}
	}
	for (int i = 0;i < s.size();i++) {
		if (isupper(s[i])) {
			c2++;
		}
	}
	if (islower(s[0]) && c1 == 0) {
		s[0] = toupper(s[0]);
		for (int i = 1; i < s.size(); i++) {
			s[i] = tolower(s[i]);
		}
		cout << s;
		return 0;
	}
	if (c2==s.size()) {
		for (int i = 0; i < s.size(); i++) {
			s[i] = tolower(s[i]);
		}
		cout << s;
	}
	else {
		cout << s;
	}
}