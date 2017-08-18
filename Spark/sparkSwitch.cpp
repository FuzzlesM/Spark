#include <stdafx.h>

void sparkSwitch()
{
	char c;
	cout << "Please answer with a Y for yes, or N for no" << endl << "Is today Monday? ";
	cin >> c;
	cout << endl;

	switch (c)
	{
	case 'Y': cout << "You input Y. Yes, today is Monday"; break;
	case 'y': cout << "You input y. Yes, today is Monday."; break;
	case 'N': cout << "You input N. No, today is not Monday."; break;
	case 'n': cout << "You input n. No, today is not Monday."; break;
	default: cout << "You did not input a valid character.";
	}
	cout << endl;
}
