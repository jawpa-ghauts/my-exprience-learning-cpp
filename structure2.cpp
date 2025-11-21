#include <iostream>

using namespace std;

struct siswa {
	string nama;
	string sekolah;
	unsigned int nis;
};

int main()
{
	struct siswa siswa2;
	
	cout << "==+ pendaftaran siswa baru ++==" << endl;
	cout << "nama: ";
	getline(cin,siswa2.sekolah);
	
	cout << "NIS: ";
	cin >> siswa2.nis;
	
	cout << endl;
	
	
}