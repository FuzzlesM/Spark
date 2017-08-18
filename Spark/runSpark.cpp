#include <stdafx.h>
#include "sparkheaders.h"

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
