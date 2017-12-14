#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <exception>

using namespace std;

bool areTwinPrimes(int currentPrime, int lastPrime);
int getSumOfDigits(int n);
bool isPrime(int n);
bool twinPrimeNumberFilter(int prime, int x);
int getSquareOfPair(int twinPrimeA, int twinPrimeB);
bool solve(int x, double k);

int main()
{
	int x;
	double k;

	cin >> x;
	cin >> k;

	cout << solve(x, k);

	return 0;
}

bool solve(int x, double k)
{
	int lastPrime = -1;
	int currentNumber = -1;

	const int numPairs = 35;
	int twinPrimesStarting[numPairs];
	int twinPrimeCounter = 0;

	double averageOfFiltered = 0;

	const int upperBound = 1000;

	while (currentNumber < upperBound)
	{
		if (isPrime(currentNumber))
		{
			if (areTwinPrimes(currentNumber, lastPrime))
			{
				int twinPrimeA = lastPrime;
				int twinPrimeB = currentNumber;

				if (twinPrimeNumberFilter(twinPrimeA, x) || twinPrimeNumberFilter(twinPrimeB, x))
				{
					twinPrimesStarting[twinPrimeCounter++] = lastPrime;
					averageOfFiltered += (twinPrimeA + twinPrimeB);
				}
			}

			lastPrime = currentNumber;
		}

		currentNumber++;
	}

	averageOfFiltered = twinPrimeCounter ? (averageOfFiltered / twinPrimeCounter) : 0;

	if (k == 0)
	{
		throw runtime_error("Division by zero (k)!");
	}

	averageOfFiltered = 1 / k * averageOfFiltered;

	for (int i = 0; i < twinPrimeCounter; i++)
	{
		if (getSquareOfPair(twinPrimesStarting[i], twinPrimesStarting[i] + 2) >= averageOfFiltered)
		{
			return false;
		}
	}

	return true;
}

bool areTwinPrimes(int currentPrime, int lastPrime)
{
	return lastPrime + 2 == currentPrime;
}

int getSumOfDigits(int n)
{
	int sum = 0;

	while (n)
	{
		int currentDigit = n % 10;
		sum += currentDigit;

		n /= 10;
	}

	return sum;
}

bool isPrime(int n)
{
	if (n < 2 || (n > 2 && n % 2 == 0))
	{
		return false;
	}

	double squareOfN = sqrt(n);
	for (int i = 3; i <= squareOfN; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

bool twinPrimeNumberFilter(int prime, int x)
{
	if (x == 0)
	{
		throw runtime_error("Division by zero (x)!");
	}

	int sumOfDigits = getSumOfDigits(prime);
	prime /= 10;

	while (prime)
	{
		int currentOddIndexedDigit = prime % 10;

		if (currentOddIndexedDigit >= (double)1 / x * sumOfDigits)
		{
			return false;
		}

		prime /= 100;
	}

	return true;
}

int getSquareOfPair(int twinPrimeA, int twinPrimeB)
{
	return twinPrimeA * twinPrimeA + twinPrimeB * twinPrimeB;
}