// runSpark.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int sparkPowerFunction()
{
	int number;
	int power;
	int answer;
	cout << "Please insert a number: ";
	cin >> number;
	cout << endl << number << " to the power of? :";
	cin >> power;
	answer = number;
	for (int i = 1; i < power; i++)
	{
		answer = answer * number;
	}
	cout << endl << number << " to the power of " << power << " is " << answer << endl;
	return 0;
}

int sparkEnumeration()
{
	enum Month { January = 1, February, March, April, May, June, July, August, September, October, November, December };
	Month secondMonth;
	Month eighthMonth;
	secondMonth = February;
	eighthMonth = August;
	cout << "February is month " << secondMonth << " of twelve, and August is month " << eighthMonth << "." << endl;
	return 0;
}

int sparkIntArray()
{
	int tenDigitArray[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	for (int nextDigit = 0; nextDigit < 10; nextDigit++) { int currentDigit = tenDigitArray[nextDigit]; cout << currentDigit << endl; }
	return 0;
}

int sparkSwitch()
{
	char i;
	cout << "Please answer with a Y for yes, or N for no" << endl << "Is today Monday? ";
	cin >> i;
	cout << endl;

	switch (i)
	{
	case 'Y': cout << "You input Y. Yes, today is Monday"; break;
	case 'y': cout << "You input y. Yes, today is Monday."; break;
	case 'N': cout << "You input N. No, today is not Monday."; break;
	case 'n': cout << "You input n. No, today is not Monday."; break;
	default: cout << "You did not input a valid character.";
	}
	cout << endl;
	return 0;
}

int main()
{
	cout << "Which application would you like to run?" << endl << "1. Power Function" << endl << "2. Int Array" << endl << "3. Enumeration" << endl << "4. Ask me a question" << endl;
	cout << "Input choice as a number: ";
	int appchoice;
	cin >> appchoice;
	cout << endl;
	switch (appchoice)
	{
	case 1: sparkPowerFunction(); break;
	case 2: sparkIntArray(); break;
	case 3: sparkEnumeration(); break;
	case 4: sparkSwitch(); break;
	}
	return 0;
}
