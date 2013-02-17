ARDDIR=../arduino_port
CFLAGS=-I/usr/local/include -I $(ARDDIR) -L/usr/local/lib -lwiringPi
OBJECTS=$(ARDDIR)/AvrCompat.o $(ARDDIR)/Print.o $(ARDDIR)/LiquidCrystal_I2C.o $(ARDDIR)/WString.o 

all: LcdExample.cpp
	g++ -o LcdExample LcdExample.cpp $(CFLAGS) -DARDUINO=100 $(OBJECTS)
