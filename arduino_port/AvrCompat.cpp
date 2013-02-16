#include "AvrCompat.h"

#include <cmath>
#include <cstring>
#include <cassert>

#include <cstdio>

using namespace std;

void itoa(int val, char* buf, int base)
{
	const char* digits = "0123456789ABCDEF";
	int neg = val < 0;
	int len;
	if (neg) {
		buf[0] = '-';
		val *= -1;
	}
	len = ceil(log(val)/log(base));
	buf[len + neg] = 0;
	while (val) {
		buf[len + neg - 1] = digits[val % base];
		val /= base;
		len--;
	}
}


