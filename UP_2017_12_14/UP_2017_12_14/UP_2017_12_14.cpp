#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

void f(int* x)
{
	*x += 100;
}

void reviewPointers()
{
	int x = 5;

	f(&x);

	cout << x << endl;

	int arr[] = { 1, 2, 3, 4, 5 };
	cout << arr[3] << endl;
	cout << 3[arr] << endl; // DO NOT DO THIS!!!!!!!!!!!!!!!!!!!!!!!!
	cout << *(arr + 3) << endl;
	cout << *(3 + arr) << endl;

	int* another_arr = arr;
	another_arr = arr + 3;

	cout << (*arr + 3) << endl;
	//arr[0] += 3;
	*arr += 3;
	// arr += 3; // does NOT work because arr is a constant pointer


	cout << *arr << endl;
}

void charsReview()
{
	/*char c = '5';
	char c1 = 'd';

	cout << (c >= '0' && c <= '9') << endl;
	cout << (c1 >= '0' && c1 <= '9') << endl;
	*/

	cout << (0 == '0') << endl;
	cout << ('0' == 48) << endl;

	//cout << two << endl;
	//cout << c << endl;
}

#pragma warning(disable:4996)

void printReverse(int* arr, int length)
{
	for (int i = length - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	char* name = "pesho";
	//cout << name << endl;

	/*int length = strlen(name);
	cout << length << endl;
*/

	//cout << name[3] << endl;
	//cout << name[0] << endl;

	char* readOnlyString = "pesho";
	readOnlyString = "gosho";

	//cout << readOnlyString << endl;
	// readOnlyString[3] = '3'; // NOT VALID

	char writeString[] = "something";
	writeString[3] = '!';
	//cout << writeString << endl;

	//strcpy(writeString, readOnlyString);
	//cout << writeString << endl;

	//char stringFromCin[1024];
	//cin >> stringFromCin;
	//cout << stringFromCin << endl;
	//cout << strlen(stringFromCin) << endl;

	//char* text = "abc";
	// cin >> text; // DOES NOT WORK because it's readonly

	char concatenated[1024] = "pesho";
	strcat(concatenated, "gosho");
	cout << concatenated << endl;

	int arr[] = { 1, 2, 3, 4, 5 };
	printReverse(arr, 5);

	return 0;
}

