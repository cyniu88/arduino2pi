#include <cstring>
#include <cassert>

#include "AvrCompat.h"

using namespace std;

void test01itoa()
{
	char buf[16];
	itoa(42, buf, 10);
	assert(!strcmp("42", buf, 10));
}

void test02itoa()
{
	char buf[16];
	itoa(-42, buf, 10);
	assert(!strcmp("-42", buf, 10));
}

void test03itoa()
{
	char buf[16];
	itoa(42, buf, 10);
	assert(!strcmp("2A", buf, 16));
}

void test04itoa()
{
	char buf[16];
	unsigned char c = 255;
	itoa(c, buf, 10);
	assert(!strcmp("255", buf, 10));
}

int main(int argc, char** argv)
{
	test01itoa();
	test02itoa();
	test03itoa();
	test04itoa();
	return 0;
}
