#pragma once
#include <string>
using namespace std;
#ifndef PCBOX_H
#define PCBOX_H
class Unit {
public:
	char* name;
	char* info;
	virtual ~Unit();
};
class Box: public Unit {
	class Power;
	class MotherBoard;
public:
	Power* power;
	MotherBoard* mb;
	virtual ~Box();
};
class Power :public Unit {
public:
	int pwr;//watt
	virtual ~Power();
};
class MotherBoard :public Unit {
	class CPU;
	class GPU;
	class RAM;
	class SATA;
public:
	virtual ~MotherBoard();
	CPU* cpu;
	char* soket;
	GPU* gpu;
	RAM* ram[4];
	int curRamUnit = 0;
	SATA* sata[6];
	int curSATAUnit = 0;
	//RAM support
	int minFreq;//800 - 800MHz
	int maxFreq;//
	int maxVolume;//16 - 16GB
	char type;//'3' - ddr3
};
class CPU :public Unit {
public:
	virtual ~CPU();
	string soket;
	//RAM support
	int minFreq;//800 - 800MHz
	int maxFreq;//
	int maxVolume;//16 - 16GB
	char type;//'3' - ddr3
};
class GPU:public Unit {
public:
	virtual ~GPU();
	int memoryVolume;
};
class RAM :public Unit {
public:
	int minFreq;//800 - 800MHz
	int maxFreq;//
	int memVolume;//16 - 16GB
	char type;//'3' - ddr3
	virtual ~RAM();
};
class SATA :public Unit {
public:
	virtual ~SATA() = 0;//abstract unit
	char typeSata;// '2' - sata2
};
class Drive : public SATA {//HDD, SSD
	int volume;
	char typeDrive;//'h' - hdd, 's' - ssd
	virtual ~Drive();
};
class ROM : public SATA {//CD\DVD\BD ROM\RW
	char typeDisk;//'c' -cd, 'd' - dvd+cd, 'b' - BlueRay+dvd+cd
	virtual ~ROM();
};
#endif //! PCBOX_H

