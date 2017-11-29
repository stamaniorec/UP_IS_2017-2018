// UP_IS_2017_11_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// <return_type> name_of_function (parameters)
// {
		// body
// }

int f1(int x)
{
	return 3;
}

int f2(int x)
{
	return x;
}

bool isEven(int x)
{
	if (x % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int getNextEvenNumber(int x)
{
	if (isEven(x))
	{
		return x + 2;
	}
	else
	{
		return x + 1;
	}
}

bool hasRepeating(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				return true;
			}
		}
	}

	return false;
}

bool containsEvenDigitsOnly(int n)
{
	while (n > 0)
	{
		int currentDigit = n % 10;
		
		if (!isEven(currentDigit))
		{
			return false;
		}
		
		n /= 10;
	}

	return true;
}

bool isPrime(int n)
{
	for (int k = 2; k < n; k++)
	{
		bool foundDivisor = n % k == 0;
		if (foundDivisor)
		{
			return false;
		}
	}

	return true;
}

bool isArmstrong(int n)
{
	int numDigits = 0;

	int copy = n;
	while (copy > 0)
	{
		numDigits++;
		copy /= 10;
	}
	
	int armstrongTest = 0;
	copy = n;
	while (copy > 0)
	{
		int currentDigit = copy % 10;
		armstrongTest += (int)pow(currentDigit, numDigits);
		copy /= 10;
	}

	return armstrongTest == n;
}

void sayHi(char* name)
{
	cout << "Dear, " << name << endl;
}


int main()
{
	// Task 1
	/*int arr[1024];

	int n;
	cin >> n;
	
	int currentNumber;
	for (int i = 0; i < n; i++)
	{
		cin >> currentNumber;
		arr[i] = currentNumber;
	}
	
	if (hasRepeating(arr, n))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}*/

	/*int a = 240;
	int b = 250;

	for (int i = a; i <= b; i++)
	{
		if (containsEvenDigitsOnly(i))
		{
			cout << i << endl;
		}
	}*/

	//int arr[1024];

	/*int n;
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

			if (isPrime(sum))
			{
				cout << "(" << a << "," << b << ")" << endl;
			}
		}
	}*/

	int a = 100;
	int b = 200;

	for (int i = a; i <= b; i++)
	{
		if (isArmstrong(i))
		{
			cout << "Armstrong exists";
			break;
		}
	}

	/*sayHi("Ivan");
	sayHi("Ivan");
	sayHi("Ivan");
	sayHi("Ivan");
	sayHi("Ivan");
	sayHi("Ivan");
	sayHi("Ivan");
	sayHi("Ivan");
	sayHi("Ivan");*/

    return 0;
}

