CXXFLAGS=-felide-constructors -std=c++11 -I/usr/local/include

all: *.h *.cpp
	g++ -c WString.cpp
	g++ -c Print.cpp
	g++ -c LiquidCrystal_I2C.cpp -DARDUINO=100
	g++ -c Wire.cpp
	g++ -c Stream.cpp
	g++ -c AvrCompat.cpp

