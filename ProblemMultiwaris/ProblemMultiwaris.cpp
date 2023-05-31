#include <iostream>
using namespace std;

class orang {
public:
	int umur;

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "orang dibuat dengan umur " << umur << "/n" << endl;
	}
};

class pekerja : public orang {
public:

	pekerja(int pUmur) :
		orang(pUmur)
	{
		cout << "pekerja dibuat\n" << endl;
	}
};

class pelajar : public orang {
public:

	pelajar(int pUmur) :
		orang(pUmur)
	{
		cout << "pelajar dibuat\n" << endl;
	}
};

class budi : public pekerja, public pelajar {
public:

	budi(int pUmur) :
		pekerja(pUmur),
		pelajar(pUmur)
	{
		cout << "Budi dibuat\n" << endl;
	}
};

int main () {
	budi a(12);

	return 0;
	}