// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// Global variable - to be avoided
//int dontDoThat = 123;

int main()
{
	//cout << dontDoThat << endl;

	// Variables give us names for things
	// and also make it easier to change a value that keeps changing
	// by making just one change in one place
	/*int weightInKilograms;
	const double kiloToLbs = 2.2;

	cin >> weightInKilograms;

	cout << weightInKilograms * kiloToLbs << endl;
	*/

	// sizeof gives us the size of a given type in bytes
	//cout << sizeof(int) << endl;
	//cout << sizeof(double) << endl;
	//cout << sizeof(bool) << endl;
	//cout << sizeof(float) << endl;

	//cout << 7 / 123 << endl; // integer division - no remainder
	//cout << 7 % 3 << endl; // modulus - the remainder

	/*cout << 123 % 10 << endl; // get the last digit
	cout << 123 % 100 << endl;
	cout << 123 / 100 << endl; // get the first digit
	cout << (123 % 100) / 10 << endl;*/ // get the middle digit

	/*bool a = 3 == 3; // boolean variables can hold boolean expressions
	bool b = 3 < 5;

	bool c = true;
	bool d = false;

	char myChar = 'd';
	cout << myChar << endl;

	int myInt = 100;
	cout << myInt << endl;*/
	/*
	bool andResult = (3 == 3 && 5 == 5); // && == and
	cout << andResult << endl;

	bool orResult = (3 != 3 || 5 == 5); // || == or
	cout << orResult << endl;*/
	
	/*
	char wtf = 'abcdefg'; // assign a single character, not many
	cout << wtf << endl;

	char* text = "abcd"; // we call this a string literal
	cout << text << endl;*/

	/*int x = 256;
	bool isMultiple = !(x % 256);
	// x % 256 gives us the remainder, which if it's a multiple is 0, !0 gives us 1 because it treats 0 as false
	cout << isMultiple << endl;
	*/
	/*
	cout << true << endl;
	cout << false << endl;*/
	// Printing a boolean value prints 1 or 0, not "true" or "false"

	/*int number;
	cin >> number;

	bool isEven = !(number % 2);

	// ifs are called conditional expressions
	// the thing between the parantheses () is a boolean expression
	// it can be anything we want
	// note that we have different paths of execution depending on the value of the boolean expression

	if (isEven)
	{
	cout << "chetno" << endl;
	}
	else
	{
	cout << "nechetno" << endl;
	}*/

	/*int number;
	cin >> number;

	if (number % 3 == 0)
	{
	cout << "kratno na 3" << endl;
	}
	else if (number % 5 == 0)
	{
	cout << "kratno na 5" << endl;
	}
	else
	{
		// use else if instead of nesting an if inside the else
		if (number % 7 == 0)
		{
		cout << "kratno na 7" << endl;
		}

	cout << "ne kratno na 3 ili 5" << endl;
	}*/

	// having nested conditions is not cool because it makes the program
	// hard to understand and it's also not particularly pretty

	/*int x;

	{
		x = 5;
		int y = 3;
		cout << x << endl;
		{
			int z = 2;
		}
	}

	// {} creates a block
	// every block has a scope associated with it
	// nested blocks have access to their parents' variables
	// but NOT the other way around
	// be careful where you declare your variables
	// you can declare a variable first, then assign a value to it later

	cout << x << endl;*/

	/*bool isAdult;
	int age = 20;

	if (age >= 18)
	{
	isAdult = true;
	}
	else
	{
	isAdult = false;
	}

	// ?: is called a ternary operator
	// it's a short-hand way to write a succinct if
	isAdult = age >= 18 ? true : false;
	isAdult = age >= 18;*/

	// enum stands for enumerated type
	// use enums when you want to give meaningful, descriptive names to things
	// which are finite in nature and you need to reason about them
	// for example seasons, grades, etc.
	
	enum Grade { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };

	int grade = SOPHOMORE;
	cout << grade << endl;

	// enums are numbers under the hood, they just make it easier for you, the programmer
	// by making things more readable
	// that's why you can assign an enum value to an int
	// they start with index 0 and increment by 1
	// you can also assign different values for every enum item

	/*if (grade == 1)
	{
	cout << 25 << endl;
	}
	else if (grade == 2)
	{
	cout << 15 << endl;
	}
	else if (grade == 3)
	{
	cout << 10 << endl;
	}
	else if (grade == 4)
	{
	cout << 5 << endl;
	}
	else
	{
	cout << "wtf" << endl;
	}*/

	// a switch is yet another way to write a conditional expression
	// they're very handy when your logic depends on the value of one single variable
	// you'll hear the phrase "switch on that variable"

	/*switch (grade)
	{
	case 1:
	cout << 25 << endl;
	break;
	case 2:
	cout << 20 << endl;
	break;
	case 3:
	cout << 10 << endl;
	break;
	case 4:
	cout << 5 << endl;
	break;
	default:
	cout << "wtf" << endl;
	}*/

	// unless you say break for a case, the path of execution continues down to the next case
	// that's the default behavior which I don't find particularly intuitive or convenient
	// but that's the way things are in C++

	// the default block is executed if no case matches the value of the variable
	// you can write as many cases as you want
	// and default is optional

	return 0;
}