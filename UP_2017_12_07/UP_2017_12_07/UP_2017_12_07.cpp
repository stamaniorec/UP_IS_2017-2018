#include "stdafx.h"
#include <iostream>

using namespace std;

void myFunction(int n)
{
	n += 100;
}

void myFunction2(int* n)
{
	*n += 100;
}

void takeArrayAsArgument(int* arr, int length)
{
	cout << *(arr + 3) << endl;
}

void takeMatrixAsArgument(int matrix[][3])
{

}

int main()
{
	/*int a = 23;

	myFunction(a);

	cout << a << endl;
*/

	/*int pesho = 123;
	cout << &pesho << endl;
	int* address = &pesho;

	cout << address << endl;
	*address += 5;
	cout << *address << endl;
*/
	/*int a = 23;

	myFunction2(&a);

	cout << a << endl;
*/

	/*int a = 123;
	short b = 50;
	double c = 3.14;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;

	int* p_a = &a;
	short* p_b = &b;
	double* p_c = &c;

	cout << sizeof(p_a) << endl;
	cout << sizeof(p_b) << endl;
	cout << sizeof(p_c) << endl;
*/

	int a = 123;
	int b = 321;
	const int* cantChangeValueButCanPointElsewhere = &a;
	//p = &b; // ok
	//*p = 321; // not ok
	int* const canChangeValueButCantPointElsewhere = &b;
	//*foo = 432; // ok
	//foo = &a; // not ok

	int arr[] = { 10, 20, 30, 40, 50 };
	int* address = arr + 3;
	int thirdValue = arr[3];
	int thirdValueViaPointer = *(arr + 3);
	// arr[n] equivalent to *(arr + n)

	//cout << sizeof(arr) << endl;
	//cout << *address << endl;
	//cout << thirdValue << endl;

	/*takeArrayAsArgument(arr, 5);

	int matrix[][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
	};

	int* arrayOfPointers[5];
	arrayOfPointers[0] = &a;
	arrayOfPointers[1] = &b;

	takeMatrixAsArgument(matrix);*/

	/*const int n = 5;

	int staticArray[n];
	for (int i = 0; i < n; i++)
	{
		cin >> staticArray[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << staticArray[i] << " ";
	}

	cout << endl;*/

	int n = 5;
	cin >> n;

	int* dynamicArray = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> dynamicArray[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << dynamicArray[i] << " ";
	}

	cout << endl;

	delete[] dynamicArray;

    return 0;
}

