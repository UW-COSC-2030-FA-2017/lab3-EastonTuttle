/*
Source.cpp
Easton Tuttle
Computer Science II
September 25, 2017
*/

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;

/*
Overflow can be detected when the results become negative
since a negative result should never occur when adding positive
numbers. n valued at 257 caused overflow with a result of -32383.
*/
void shortAddition()
{
	short n;
	short sum = 0;
	short temp = 0;

	cout << "Please enter a value of n: ";
	cin >> n;
	while (temp != n + 1)
	{
		sum += temp;
		temp++;
	}
	cout << "The sum of 1 through " << n << " added together is " << sum << ".\n";
}

/*
Overflow can be detected when the results become negative
since a negative result should never occur when adding positive
numbers. n valued at 985,309,490 caused overflow with a result of -1,032,763,525.
*/
void longAddition()
{
	long n;
	long sum = 0;
	long temp = 0;

	cout << "Please enter a value of n: ";
	cin >> n;
	while (temp != n + 1)
	{
		sum += temp;
		temp++;
	}
	cout << "The sum of 1 through " << n << " added together is " << sum << ".\n";
}

/*
Overflow can be detected when the resulting value is "inf" (infinity.) n valued
at 40 caused overflow with a result of inf.
*/
void floatFactorial()
{
	long n;
	long temp = 1;
	float product = 1;

	cout << "Please enter a value of n: ";
	cin >> n;
	while (temp != n + 1)
	{
		product *= temp;
		temp++;
	}
	cout << "The product of 1 through " << n << " multiplied together is " << product << ".\n";
}

/*
Overflow can be detected when the resulting value is "inf" (infinity.) n valued
at 171 caused overflow with a result of inf.
*/
void doubleFactorial()
{
	long n;
	long temp = 1;
	double product = 1;

	cout << "Please enter a value of n: ";
	cin >> n;
	while (temp != n + 1)
	{
		product *= temp;
		temp++;
	}
	cout << "The product of 1 through " << n << " multiplied together is " << product << ".\n";
}

/*
The result of the sum - 1.0 should get closer and closer to 0 as n gets larger
but instead the result continues to grow due to overflow. n valued at 15000
produces a result of 9.19306.
*/
void floatStrange()
{
	float n;
	float temp = 1;
	float sum = 0;

	cout << "Please enter a value of n: ";
	cin >> n;
	while (temp != n + 1)
	{
		sum = sum + (1 / temp);
		temp++;
	} 
	sum = sum - 1.0;
	cout << "The sum of 1/1 through 1/" << n << " added together minus 1.0 is " << sum << ".\n";
}

/*
The result of the sum - 1.0 should get closer and closer to 0 as n gets larger
but instead the result continues to grow due to overflow.n valued at 15000
produces a result of 9.19305.
*/
void doubleStrange()
{
	double n;
	double temp = 1;
	double sum = 0;

	cout << "Please enter a value of n: ";
	cin >> n;
	while (temp != n + 1)
	{
		sum = sum + (1 / temp);
		temp++;
	}
	sum = sum - 1.0;
	cout << "The sum of 1/1 through 1/" << n << " added together minus 1.0 is " << sum << ".\n";
}

/*
The for loop should end when i >= 4.4 but instead prints out i = 4.4 regardless.
This is due to overflow improperly handling exact results which causes the for
loop to read 4.4 as a number smaller than 4.4.
*/
void floatPuzzle()
{
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << "\n";
	}
}

/*
After changing the data type to double, i = 4.4 is no longer printed out (which
is the expected result.) Overflow is properly handled by the double data type.
*/
void doublePuzzle()
{
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << "\n";
	}
}

int main()
{
	shortAddition();
	longAddition();
	floatFactorial();
	doubleFactorial();
	floatStrange();
	doubleStrange();
	floatPuzzle();
	doublePuzzle();
	return 0;
}