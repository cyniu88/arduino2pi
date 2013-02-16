#include <wiringPi.h>
#include <cstdio.h>
#include <LiquidCrystal.h>

using namespace std;

int main()
{
	LIquidCrystal lcd;
	if (wiringPiSetup == -1) {
		fprintf(stderr, "could not set up wiringPi\n");
	}
	//...
	
}

