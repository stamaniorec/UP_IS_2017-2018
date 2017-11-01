// UP_2017_10_19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <limits>

using namespace std;

int main()
{
	/*int i = 0;
	int n;
	cin >> n;*/

	/*while (i < n)
	{
		cout << "hello world" << endl;
		
		i = i + 1;
	}*/

	/*do
	{
		cout << "hello world" << endl;

		i = i + 1;
	} while (false);*/

	// --------------------------------------

	/*int i = 0;
	int n;*/

	/*cin >> n;
	while (n > 0)
	{
		cout << "positive number" << endl;
		
		cin >> n;
	}*/

	/*do
	{
		cin >> n;

		if (n > 0)
		{
			cout << "positive number" << endl;
		}
	} while (n > 0);*/

	// --------------------------------------

	/*int i = 0;

	while (i < 5)
	{
		cout << "something" << endl;
		
		i = i + 1;
	}*/

	//int x = 5;

	//x = x + 5;
	//x += 5;

	// Equivalent
	// x = x + 1
	// x += 1;
	// x++;
	// ++x;

	//cout << x << endl;

	/*int i = 0;

	while (i < 5)
	{
		cout << "I'm in da loop" << endl;

		i++;
	}*/

	/*int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "I'm in da for loop" << endl;
	}*/

	/*for (counter initialization; boolean expression; increment counter)
	{

	}*/

	// does not work in visual studio but can work elsewhere
	/*int x;

	while (false)
	{
		 x = 5;
	}

	cout << x << endl;*/

	//while (true) cout << "it's true" << endl;

	//char c;
	//cin >> c;

	//int lowercaseAAscii = 97; // char a = 'a';
	//int lowercaseZAscii = 122; // char z = 'z';

	//cout << ('z' == 122) << endl;

	/*char c;
	cin >> c;

	if (c >= 'a' && c <= 'z')
	{
		cout << "lowercase letter" << endl;
	}*/
	
	/*int n = 5;
	int factorial = 1;
*/
	//int i = 2;
	//while (i <= n)
	//{
	//	factorial *= i; //factorial = factorial * i;
	//	i++; // i += 1; //i = i + 1;
	//}

	/*for (int i = 2; i <= n; i++)
	{
		factorial *= i;
	}

	cout << factorial << endl;*/

	/*int countNumbersToSum;
	cin >> countNumbersToSum;

	int sum = 0;*/

	/*for (int i = 0; i < countNumbersToSum; i++)
	{
		int currentNumber;
		cin >> currentNumber;

		sum += currentNumber;
	}*/

	/*int i = 0;
	while (i < countNumbersToSum)
	{
		int currentNumber;
		cin >> currentNumber;

		sum += currentNumber;

		i++;
	}

	cout << sum << endl;*/

	//int countNumbers;
	//cin >> countNumbers;

	//int smallestSoFar = numeric_limits<int>::max();
	////cout << "The maximum value for int in C++ is " << smallestSoFar << endl;

	//for (int i = 0; i < countNumbers; i++)
	//{
	//	int currentNumber;
	//	cin >> currentNumber;

	//	if (currentNumber < smallestSoFar)
	//	{
	//		smallestSoFar = currentNumber;
	//	}
	//}

	//cout << "The smallest number is " << smallestSoFar << endl;

	/*int n;
	cin >> n;

	bool isPrime = true;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}

	cout << isPrime << endl;
*/

	return 0;
}

