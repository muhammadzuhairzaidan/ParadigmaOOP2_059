#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Halo saya Function dari base class";
	}
};

