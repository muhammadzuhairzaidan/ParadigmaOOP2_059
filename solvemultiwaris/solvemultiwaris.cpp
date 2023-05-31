#include <iostream>
using namespace std;

class orang {
public:
	int umur;

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "orang dibuat dengan umur" << umur << "\n" << endl;
	}
};

class pekerja : virtual public orang {
public:

	pekerja(int pUmur) :
		orang(pUmur)
	{
		cout << "Pekerja dibuat\n" << endl;
	}
};

class pelajar : virtual public orang {
public:

	pelajar(int pUmur) :
		orang(pUmur)
	{
		cout << "Pelajar dibuat\n" << endl;
	}
};
