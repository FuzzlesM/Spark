#include "stdafx.h"
#include <iostream>
#include <conio.h>

int main()
{
	int tenDigitArray[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	for (int nextDigit = 0; nextDigit < 10; nextDigit++) { int currentDigit = tenDigitArray[nextDigit]; cout << currentDigit << endl; }
	getch();
	return 0;
}