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
