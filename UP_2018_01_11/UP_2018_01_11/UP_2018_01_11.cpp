#include "stdafx.h"

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// --- --- --- Task 1 Below --- --- ---
bool isVowel(char c)
{
	return c == 'a' || c == 'o' || c == 'e' || c == 'u' || c == 'i';
}

bool containsVowel(const char* str)
{
	if (*str == '\0')
	{
		return false;
	}

	return isVowel(*str) || containsVowel(str + 1);
}

// --- --- --- Task 2 Below --- --- ---
int countVowels(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}

	return (isVowel(*str) ? 1 : 0) + countVowels(str + 1);
}

// Task 1, another way
int containsVowel2(const char* str)
{
	return countVowels(str) > 0;
}

// --- --- --- Task 3 Below --- --- ---
int max(int a, int b)
{
	return a >= b ? a : b;
}

int findMaxHelper(int* arr, int length, int cur)
{
	if (cur == length) return -INFINITY; // INFINITY comes from cmath

	return max(arr[cur], findMaxHelper(arr, length, cur + 1));
}

int findMax(int* arr, int length)
{
	return findMaxHelper(arr, length, 0);
}

// --- --- --- Task 4 Below --- --- ---
bool isPrimeHelper(int n, int divisor)
{
	if (divisor == 1) return true;

	return (n % divisor != 0) && isPrimeHelper(n, divisor - 1);
}

// A tail-recursive function is a recursive function which "does nothing" after its recursive call.
// The compiler can optimize tail recursion in an iterative way under the hood and is typically much faster and saves on space!

bool isPrimeHelperTail(int n, int divisor, int isPrimeSoFar)
{
	if (!isPrimeSoFar) return false;
	if (divisor == 1) return true;

	return isPrimeHelperTail(n, divisor - 1, isPrimeSoFar && n % divisor != 0);
}

bool isPrime(int n)
{
	if (n == 1) return false;

	//return isPrimeHelper(n, sqrt(n));
	return isPrimeHelperTail(n, sqrt(n), true);
}

// --- --- --- Task 5 Below --- --- ---
bool isAscendingHelper(int* arr, int first, int second, int length)
{
	if (second == length) return true;

	return (arr[first] <= arr[second]) && isAscendingHelper(arr, first + 1, second + 1, length);
}

bool isAscendingTailHelper(int* arr, int first, int second, int length, bool isAscendingSoFar)
{
	if (!isAscendingSoFar) return false;
	if (second == length) return isAscendingSoFar;

	return isAscendingTailHelper(arr, first + 1, second + 1, length, isAscendingSoFar && arr[first] <= arr[second]);
}

bool isAscending(int* arr, int length)
{
	//return isAscendingHelper(arr, 0, 1, length);
	return isAscendingTailHelper(arr, 0, 1, length, true);
}

// --- --- --- Task 6 Below --- --- ---
void reverseHelper(int* arr, int length, int offset)
{
	if (offset >= length / 2) return;

	int tmp = arr[offset];
	arr[offset] = arr[length - 1 - offset];
	arr[length - 1 - offset] = tmp;

	reverseHelper(arr, length, offset + 1);
}

void reverse(int* arr, int length)
{
	reverseHelper(arr, length, 0);
}

// --- --- --- Task 7 Below --- --- ---
int f(int x)
{
	return (x - 2) * (x - 2);
}

int findXWithMinimumValue(int a, int b)
{
	if (a == b) return a;

	int next = findXWithMinimumValue(a + 1, b);

	return f(a) < f(next) ? a : next;
}

// --- --- --- Task 8 Below --- --- ---
int factorial(int n)
{
	if (n == 1) return 1;

	return n * factorial(n - 1);
}

int power(int a, int x)
{
	if (x == 1) return a;

	return a * power(a, x - 1);
}

int weirdFunction(int a, int b)
{
	if (a == 1) return 1;

	return power(a, b) + weirdFunction(a - 1, b);
}

double F(int n)
{
	return (double)factorial(n) / weirdFunction(n, n);
}

// --- --- --- Task 9 Below --- --- ---
int countOccurrences(int num, int* arrayToScan, int length)
{
	if (length == 0) return 0;

	return (*arrayToScan == num) + countOccurrences(num, arrayToScan + 1, length - 1);
}

void occurrences(int* arr1, int length1, int* arr2, int length2)
{
	if (length1 == 0) return;

	*arr1 = countOccurrences(*arr1, arr2, length2);

	occurrences(arr1 + 1, length1 - 1, arr2, length2);
}

// --- --- --- Task 10 Below --- --- ---
int factorialHelperTail(int n, int accumulator)
{
	if (n == 1) return accumulator;

	return factorialHelperTail(n - 1, n * accumulator);
}

int factorialTailSolution(int n)
{
	return factorialHelperTail(n, 1);
}

int main()
{
	//cout << containsVowel("kljdfke") << endl;
	//cout << containsVowel("kljdfk") << endl;
	//cout << containsVowel("kljidfk") << endl;

	//cout << countVowels("kljdfke") << endl;
	//cout << countVowels("kljdfk") << endl;
	//cout << countVowels("kljidfk") << endl;

	//cout << containsVowel2("kljdfke") << endl;
	//cout << containsVowel2("kljdfk") << endl;
	//cout << containsVowel2("kljidfk") << endl;

	cout << isPrime(1) << endl;
	cout << isPrime(7) << endl;
	cout << isPrime(13) << endl;
	cout << isPrime(2) << endl;
	cout << isPrime(4) << endl;
	cout << isPrime(16) << endl;
	cout << isPrime(20) << endl;

	cout << factorialTailSolution(5) << endl;

	int arr[] = { 1, 2, 3, 4, 5 };
	cout << findMax(arr, 5) << endl;

	return 0;
}