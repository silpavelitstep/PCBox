#include "pcbox.h"
#include <iostream>
using namespace std;
Unit::~Unit() {
	if (info) delete[] info;
	if (name) delete[] name;
	cout << "free Unit\n";

}
Box::~Box() { cout << "free PCBox\n"; }
Power::~Power() { cout << "free Power\n"; }
MotherBoard::~MotherBoard(){ cout << "free MotherBoard\n"; }
CPU::~CPU() { cout << "free CPU\n"; }
GPU::~GPU(){ cout << "free GPU\n"; }
RAM::~RAM() { cout << "free GPU\n"; }
SATA::~SATA() { cout << "free SATA\n"; }
Drive::~Drive() { cout << "free Drive\n"; }
ROM::~ROM() { cout << "free ROM"; }