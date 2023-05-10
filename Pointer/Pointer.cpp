#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};

void mahasiswa::showNim(){ //implementasi method diuar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };		//objrct mhs
	mhs.showNim();			//member access operator

	mahasiswa& ref = mhs;	//Pointer Reference refmhs
	ref.nim = 2;			//Member Access Operator
	mhs.showNim();

}
