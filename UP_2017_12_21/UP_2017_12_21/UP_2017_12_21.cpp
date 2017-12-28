#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>

// Another way of defining constants
#define MY_CONSTANT 5
#define NULL 0

using namespace std;

// Function overloading
// It knows which one to call by the argument provided when calling the function
void swap(int* a, int *b) { }
void swap(double* a, double *b) { }
void swap(char* a, char* b) { }

void aPrimitiveWayOfWorkingWithCharArrays();
void aBetterWayOfWorkingWithStrings();
void dynamicMemoryAllocation();
int strlen1(const char* str);
void constPointersExample();

#pragma warning(disable:4996)

int main()
{
	//aPrimitiveWayOfWorkingWithCharArrays();

	//aBetterWayOfWorkingWithStrings();

	//dynamicMemoryAllocation();

	//constPointersExample();

	//cout << strlen1("pesho") << " " << strlen1("hello world") << endl;

	/*char name[1024] = "pesho";
	name[0] = '@';
	cout << name << endl;

	strcat(name, "e mnogo gotin");
	cout << name << endl;*/

	/*cout << "Izberete 1 ili 2" << endl;

	int choice;
	cin >> choice;

	cout << "Enter your name now: ";
	string name;
	getline(cin, name);

	cin >> name;

	cout << "Hello, " << name << ", your choice was " << choice;
*/
	return 0;
}

void aPrimitiveWayOfWorkingWithCharArrays()
{
	char name[1024];

	char c;
	int index = 0;

	while (true)
	{
		// Read char by char without special treatment of whitespace characters
		c = cin.get();

		name[index] = c;
		index++;

		if (c == ' ' || c == '\n' || c == '\t')
		{
			break;
		}
	}

	cout << "Hello, ";

	for (int i = 0; i < index; i++)
	{
		cout << name[i];
	}

	cout << endl;
}

void aBetterWayOfWorkingWithStrings()
{
	char name[1024];

	cin >> name;
	cout << "Hello, " << name << endl;
}

void dynamicMemoryAllocation()
{
	int* arr = new int[10];
	// work with arr

	delete[] arr;
	arr = NULL; // it's a good practice to make the pointer point to nothing

	cout << (0 == NULL) << endl; // NULL is just a #define-d constant for 0
}

int strlen1(const char* str)
{
	int length = 0;

	//*str = '@'; // won't work because of the added const-ness

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return length;
}

void constPointersExample()
{
	int a = 5;
	int b = 10;

	const int* p1 = &a; // value can't be modified

	//*p1 = 7; // does not work
	p1 = &b;

	int* const p2 = &a; // pointer can't be repointed
	*p2 = 8;
	cout << a << endl;
	//p2 = &b; // does not work
}