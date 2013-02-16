#include "AvrCompat.h"

#include <cmath>
#include <cstring>

using namespace std;

void itoa(int val, char* buf, int base)
{
	const char* digits = "0123456789ABCDEF";
	int len = ceil(log(val)/log(base));
	int neg = val < 0;
	buf[len + neg] = 0;
	if (neg) {
		buf[0] = '-';
	}
	while (val) {
		buf[len + neg - 1] = digits[val % base];
		val /= base;
		len--;
	}
}


