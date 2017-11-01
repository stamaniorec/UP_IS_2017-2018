// UP_2017_10_26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	/*cout << "Enter n: ";
	int n;
	cin >> n;

	long sum = 0;

	cout << "Enter numbers: ";

	for (int i = 0; i < n; i++)
	{
		int currentNumber;
		cin >> currentNumber;

		sum = sum + currentNumber;
	}

	cout << sum / (double)n << endl;*/

	/*double a = 5.5;
	int b = (int)a;

	cout << a << endl;
*/
	
	/*cout << "Enter n: ";
	int n;
	cin >> n;

	if (n < 2)
	{
		cout << "No way to have two consecutive numbers" << endl;
	}
	else
	{
		int currentNumber;
		cin >> currentNumber;

		int previousNumber = currentNumber;
		bool seriesHasTwoConsecutiveEqualNumbers = false;

		for (int i = 1; i < n; i++)
		{
			cin >> currentNumber;

			if (previousNumber == currentNumber)
			{
				seriesHasTwoConsecutiveEqualNumbers = true;
				break;
			}

			previousNumber = currentNumber;
		}

		if (seriesHasTwoConsecutiveEqualNumbers)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}*/

	/*const int seed1 = 0;
	const int seed2 = 1;

	int prev1 = seed1;
	int prev2 = seed2;

	int fibNumber = 0;

	int upperBound;
	cin >> upperBound;

	cout << seed1 << " " << seed2 << " ";

	while (fibNumber < upperBound)
	{
		fibNumber = prev1 + prev2;

		if (fibNumber < upperBound)
		{
			cout << fibNumber << " ";
		}
		
		prev1 = prev2;
		prev2 = fibNumber;
	}

	cout << endl;*/

	/*int a;
	cin >> a;

	while (a)
	{
		int currentDigit = a % 10;
		cout << currentDigit;

		a /= 10;
	}

	cout << endl;
*/

	for (int i = 100; i < 1000; i++)
	{
		int lastDigit = i % 10;
		int firstDigit = i / 100;
		int middleDigit = (i / 10) % 10;

		if (firstDigit != middleDigit && firstDigit != lastDigit && middleDigit != lastDigit)
		{
			cout << i << endl;
		}
	}

    return 0;
}

