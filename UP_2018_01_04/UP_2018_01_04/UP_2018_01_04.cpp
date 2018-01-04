#include "stdafx.h"
#include <iostream>

using namespace std;

void doNotCallMeButImStillRecursive()
{
	// This recursive function lacks a base case
	// and thus results in a stack overflow

	cout << "hello" << endl;
	doNotCallMeButImStillRecursive();
}

void recursive(int stop)
{
	if (stop == 100)
	{
		return;
	}

	cout << "hello" << endl;
	
	recursive(stop + 1);
}

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}

	return n * factorial(n - 1);
}

// naive implementation without caching
int fibonacci(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;

	cout << "calculating fib(" << n << ")" << endl;

	int fibLeft = fibonacci(n - 1);
	cout << "left of fib(" << n << ")" << " is " << fibLeft << endl;

	int fibRight = fibonacci(n - 2);
	cout << "right of fib(" << n << ")" << " is " << fibRight << endl;

	cout << "returning " << (fibLeft + fibRight) << " as result of fibonacci(" << n << ")" << endl;
	return fibLeft + fibRight;
}

// The call stack is used not just for recursive functions
// but ALL functions
// It's always been there under the hood,
// you've just never known about its existance

int gosho()
{
	int c = 12;
	int d = 18;

	return c + d;
}

int pesho()
{
	int a = 5;
	int b = 8;

	int g = gosho();

	return a + b + g;
}

void nastyFunction(int n)
{
	cout << "Before " << n << endl;
	
	if (n > 0)
	{
		nastyFunction(n - 1);
	}

	cout << "After " << n << endl;
}

int power(int a, int x)
{
	if (x == 0)
	{
		return 1;
	}

	return a * power(a, x - 1);
}

void convertToBinary(int n)
{
	if (n == 0)
	{
		return;
	}

	// Before making the recursive call you're in the forward execution
	
	convertToBinary(n / 2);
	
	// After making the recursive call you're in the reverse execution

	cout << (n % 2);
}

int sumOfValuesInArray(int* arr, int length, int i)
{
	if (i == length)
	{
		return 0;
	}

	// These are equivalent, can you see why?
	//return arr[i] + sumOfValuesInArray(arr, length, i + 1);
	//return *(arr + i) + sumOfValuesInArray(arr, length, i + 1);
	//return arr[0] + sumOfValuesInArray(arr + 1, length, i + 1);
	return *arr + sumOfValuesInArray(arr + 1, length, i + 1);
}

void printValuesInArray(int* arr, int length, int i)
{
	if (i == length)
	{
		return;
	}

	//cout << *arr << " "; // in regular order 
	printValuesInArray(arr + 1, length, i + 1);
	cout << *arr << " "; // in reverse order
}

int main()
{
	//recursive(1);
	//cout << factorial(5) << endl;
	//cout << fibonacci(100) << endl; // takes forever

	//fibonacci(5);

	//int p = pesho();
	//cout << "done with pesho " << p << endl;

	//nastyFunction(3);
	//cout << power(4, 4) << endl;

	//convertToBinary(4923);

	int arr[] = { 1, 2, 3, 4, 5 };
	//cout << sumOfValuesInArray(arr, 5, 0) << endl;

	printValuesInArray(arr, 5, 0);

	/*
		Exercise problems (solve recursively):

		Sum of 1 to n
		Sum of digits of a number
		If string is palindrome
	*/

    return 0;
}

