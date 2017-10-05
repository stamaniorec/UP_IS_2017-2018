// UP_2017_10_05.cpp : Defines the entry point for the console application.
// jkasdjfjalksdf

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

// This is a comment. It starts with // and everything after that until
// the end of the line is not executed.

// Programs are executed sequentially, i.e. line after line from top to bottom.

// This program is just a text file. You can open it with Notepad
// if you find it in the file explorer
// (the project usually sits in My Documents/Visual studio 2015 or some place similar).

int main()
{
	int x; // This is a variable
	// In math, a variable is something we don't know and look to solve for.
	// In programming, you can think of it as a box where you can store things.
	// Variables have types (int in this case).
	// Different types have different sizes - just like boxes.
	// Sometimes you can put a smaller item in a bigger box,
	// but the other way around is never possible without losing data.
	// We'll look into those details later on in the course.
	// By the way, we say that the variable x is *declared*,
	// i.e. it exists, but we haven't given it a value.
	// You can think of computer memory (RAM, but not only) as a massive storage house
	// consisting of cells.
	// Every cell has a size of 1 byte.
	// Different variables take up a different number of cells in memory.

	// Byte = 8 bits
	// Bit - boolean value - true/false (1/0)
	// You've heard about 0s and 1s and all that stuff from movies :)
	// 1 byte = 8 bits = 8 times (0 or 1) = 2^8 = 256 possible values

	// If you're wondering why a bool variable takes 1 byte (256 possible values)
	// when we can only store a 0 or 1 in it...
	// Very good!
	// That's how computers work, unfortunately. :)
	// It's not efficient and there are ways around it but usually we just don't care.

	int y = 5;
	// We say that y is *initialized*, i.e. we have declared it AND given it a value.

	int z;
	z = 123; // Don't do that. If you can put it on one line, do so.

	// int zz;
	// int zz = 123;
	// This doesn't work because we declare zz twice.
	// We can only declare a variable *once*.

	// Every variable has a name.
	// You should get in the habit of giving variable meaningful names.
	// In a simple program like this one, we can more or less get by with x, y and z.
	// However, when we work on an actual project with other people
	// we should give our best to make our code easy to understand.

	cout << "Hello world" << endl; // This is how we print something on the standard output.
	cin >> x; // This is how we read a variable from the standard input.
	// endl stands for "end of line"

	// Standard input = keyboard
	// Standard output = the black scary-looking window

	// Things enclosed in double quotes ("") such as "Hello world" we call strings.
	// We actually call them string literals, but that's not important for now.
	// Roughly speaking, string = text

	float piFloat = 3.14f; // Note the f at the end - 3.14 by default is a double
	double piDouble = 3.14; // the f tells the computer we want a float

	// Floats take up less memory (4 bytes), but are less precise.
	// Use double unless you have a reason to use a float.
	// Either way should work for the purposes of this course.

	// You might be thinking, if 3.14 is a double, then why does
	float imprecisePi = 3.14;
	// work correctly? Are we not assigning a double value to a float variable?
	// Yes, we are. That's one of those cases where you can put a bigger item in a smaller box.
	// However, you lose data. In this case, you lose precision.

	int i = 3.14; // This is also legal.
	// Legal, meaning that the program will run and work.
	// However, it won't work like we probably expect it to. :)
	cout << i << endl; // Prints 3. We lose data - we lose the floating point part of the number.

	cout << "Note that every statement must end with a semicolon (;)!" << endl;
	// Statement ~ Line of code ~ Single instruction

	// To use cout and cin, we must include the iostream library
	// We do so by writing #include <iostream> usually at the top of our file.
	// Library = code not written by us which we use because it's handy and we don't want to write our own

	// Another library is cmath. It gives us useful mathematical functions such as sqrt.
	// Can you write your own program to calculate a square root without using sqrt and cmath?
	// Probably not and that's more than fine. :)
	// That's why we use libraries.
	// Like every library we want to use, we need to #include it at the top.

	// cin and cout lie in something called "the standard namespace"
	// in order to use them, we need to have access to it
	// one way is to do it directly by writing std::cin, std::cout
	// but this gets tiring quite fast
	// that's why we also add a using namespace std; under our includes
	// It literally does what it says.
	// (This program will be) using (the) namespace (called) std;
	// std is short for standard (namespace)
	// We'll get to what exactly namespaces are and why they exist later on in the course.
	// For now, you can either think of them as folders where we store things
	// or not worry about them at all and just remember to always use the standard namespace. :)
	// We won't be using any more namespaces other than std.

	// Variables are also very useful for avoiding repetition.
	// Remember how I had to change the number twice every time?
	// Once when declaring the variable and once when printing?
	// That's why we *extract* the 15 into a variable.

	int number = 15;
	double result = sqrt(number);
	cout << "The square root of " << number << " is : " << x << endl;

	// On a side note,
	// numbers just randomly floating around the code are called "magic numbers"
	// Programmers don't like magic numbers. :) 
	// Time goes on, people change jobs, people forget what that number meant
	// and where it came from and why...

	return 0;
}

