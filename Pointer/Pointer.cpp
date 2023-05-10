#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNIM(); //deklarasi method
};

void mahasiswa::showNIM{ //implementasi method diuar class
	cout << "No Induk = " << nim << endl;
}
