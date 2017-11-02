// UP_2017_11_02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// Problem 1: Print the following
	// 1
	// 1 2
	// 1 2 3
	// 1 2 3 4
	// 1 ... n
	// for a given number n

	/*int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}

		cout << endl;
	}*/

	// Problem 2: Print a Christmas tree
	// Problem taken from Telerik Academy, it's called Fir Tree
	// You can see it here: http://my.telerikacademy.com/Courses/LectureResources/Video/3018/Exam-preparation-Fir-tree-%D0%AF%D0%BD%D0%BA%D0%BE

	//int n;
	//cin >> n;

	//int imageWidth = n;
	//int numberOfRowsWithBaseIncluded = (n + 1) / 2;

	//// for each row with base
	//for (int i = 0; i <= numberOfRowsWithBaseIncluded; i++)
	//{
	//	// print row with index i
	//	int row = i;

	//	// if printing base, i.e. last iteration of the for loop
	//	if (i == numberOfRowsWithBaseIncluded)
	//	{
	//		row = 0;
	//	}

	//	// fancy math magic
	//	int starCount = 1 + row * 2;
	//	int dotCount = (imageWidth - starCount) / 2;

	//	// print dotCount number of dots
	//	for (int j = 0; j < dotCount; j++)
	//	{
	//		cout << ".";
	//	}

	//	// print starCount number of stars
	//	for (int j = 0; j < starCount; j++)
	//	{
	//		cout << "*";
	//	}

	//	// print dotCount number of dots
	//	for (int j = 0; j < dotCount; j++)
	//	{
	//		cout << ".";
	//	}

	//	cout << endl;
	//}

	/*int a = 5;
	int b = 3;

	// a good example of where a ternary operator is very handy
	cout << a << "x^2" << (b > 0 ? "+" : "") << b << "x";*/

	int n;
	cin >> n;

	int arr[1024]; // this is ineffective but you'll have to live with it (for now)
	//int* arr = new int[n]; // you don't care about this now

	for (int i = 0; i < n; i++)
	{
		int currentNumber;
		cin >> currentNumber;

		arr[i] = currentNumber;
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}

