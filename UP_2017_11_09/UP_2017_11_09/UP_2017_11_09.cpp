// UP_2017_11_09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// ------------------- Problem 1
	// Enter n numbers
	// Is there a pair of repeating numbers?
	// -------------------

	/*int arr[1024];

	int n;
	cin >> n;

	int currentNumber;

	for (int i = 0; i < n; i++)
	{
		cin >> currentNumber;
		arr[i] = currentNumber;
	}

	bool hasRepeating = false;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				hasRepeating = true;
				break;
			}
		}
	}

	if (hasRepeating)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}*/

	// ------------------- Problem 2
	// Find all whole numbers in the interval [a,b]
	// which contain even digits only
	// -------------------

	/*int a = 240;
	int b = 250;

	for (int i = a; i <= b; i++)
	{
		bool containsEvenDigitsOnly = true;
		int n = i;

		while (n > 0)
		{
			int currentDigit = n % 10;

			bool isEven = (currentDigit % 2 == 0);

			if (!isEven)
			{
				containsEvenDigitsOnly = false;
				break;
			}

			n /= 10;
		}

		if (containsEvenDigitsOnly)
		{
			cout << i << endl;
		}
	}*/

	// ------------------- Problem 3
	// Find all whole numbers in the interval [a,b]
	// which are palindromes - the same when read forward and backwards
	// -------------------

	/*int a = 1;
	int b = 1300;

	for (int i = a; i <= b; i++)
	{
		int currentNumber = i;

		int reverse = 0;

		while (currentNumber > 0)
		{
			int currentDigit = currentNumber % 10;

			reverse = reverse * 10 + currentDigit;

			currentNumber /= 10;
		}

		if (i == reverse)
		{
			cout << i << endl;
		}
	}*/

	// ------------------- Problem 4
	// Find the number of whole numbers in the interval [a,b]
	// for which the sum of their divisors is less than k
	// -------------------

	/*int a = 10;
	int b = 15;
	int k = 15;
	int count = 0;

	for (int i = a; i <= b; i++)
	{
		int currentNumber = i;

		int sumOfDivisors = 0;

		for (int i = 1; i <= currentNumber; i++)
		{
			bool isDivisor = currentNumber % i == 0;
			if (isDivisor)
			{
				sumOfDivisors += i;
			}
		}

		if (sumOfDivisors < k)
		{
			cout << i << endl;
			count++;
		}
	}

	cout << count << endl;*/

	// ------------------- Problem 5
	// Find whether an entered number is a palindrome
	// -------------------

	/*int currentNumber;
	cin >> currentNumber;

	int reverse = 0;
	int copy = currentNumber;

	while (currentNumber > 0)
	{
	int currentDigit = currentNumber % 10;

	reverse = reverse * 10 + currentDigit;

	currentNumber /= 10;
	}

	if (copy == reverse)
	{
	cout << copy << " is a palindrome" << endl;
	}
	else
	{
	cout << copy << " is NOT a palindrome" << endl;
	}*/

	// ------------------- Problem 6
	// Find whether there is an armstrong number in the interval [a,b]
	// i.e. they are equal to the sum of their digits to the power of the number of digits
	// e.g. 153 = 1^3 + 5^3 + 3^3
	// e.g. 370 = 3^3 + 7^3 + 0^3
	// -------------------

	/*int a = 100;
	int b = 200;

	bool armstrongExists = false;

	for (int i = a; i <= b; i++)
	{
		int currentNumber = i;

		int numDigits = 0;
		int copy = currentNumber;

		while (copy > 0)
		{
			numDigits++;
			copy /= 10;
		}

		int armstrongTest = 0;
		copy = currentNumber;
		while (copy > 0)
		{
			int currentDigit = copy % 10;

			armstrongTest += pow(currentDigit, numDigits);

			copy /= 10;
		}

		if (armstrongTest == currentNumber)
		{
			cout << currentNumber << " is an Armstrong number" << endl;
			armstrongExists = true;
			break;
		}
	}

	cout << armstrongExists << endl;*/

	// ------------------- Problem 6
	// Enter n numbers and find the pairs whose sums are a prime number
	// e.g. n = 5, numbers -> 5 11 6 7 13
	// result:
	// (5, 6)
	// (11, 6)
	// (6, 7)
	// (6, 13)
	// -------------------

	int arr[1024];
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int cur;
		cin >> cur;

		arr[i] = cur;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int a = arr[i];
			int b = arr[j];

			int sum = a + b;

			bool isPrime = true;
			for (int k = 2; k < sum; k++)
			{
				bool foundDivisor = sum % k == 0;
				if (foundDivisor)
				{
					isPrime = false;
					break;
				}
			}

			if (isPrime)
			{
				cout << "(" << a << "," << b << ")" << endl;
			}
		}
	}

	return 0;
}

