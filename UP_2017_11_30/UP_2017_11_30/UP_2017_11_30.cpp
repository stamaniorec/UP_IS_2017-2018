#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

void task1()
{
	int x;
	cin >> x;

	if (x < 1 || x > 9)
	{
		cerr << "Invalid x" << endl;
		return;
	}

	double arr[10];
	int index = 0;
	int current = 0;

	while (index < 10)
	{
		if (current % x == 0)
		{
			int sum = 0;
			
			for (int i = 0; i < current; i++)
			{
				sum += i;
			}

			arr[index++] = sum;
		}

		current++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void task2()
{
	int x;
	cin >> x;

	if (x < 1 || x > 9)
	{
		cerr << "Invalid x" << endl;
		return;
	}

	double arr[10];
	int index = 0;

	for (int N = 0; N < 10; N++)
	{
		double sum = 0;

		for (int z = N * x; z < (N + 1) * x; z++)
		{
			sum += cos(z);
		}

		arr[index++] = sum;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main()
{
	task1();

    return 0;
}

