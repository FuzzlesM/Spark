#include <stdafx.h>

void sparkEnumeration()
{
	enum Month { January = 1, February, March, April, May, June, July, August, September, October, November, December };
	Month secondMonth;
	Month eighthMonth;
	secondMonth = February;
	eighthMonth = August;
	cout << "February is month " << secondMonth << " of twelve, and August is month " << eighthMonth << "." << endl;
}