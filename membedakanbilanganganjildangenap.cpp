// Menginclude si library nya
#include <iostream>

// biar gak usah std:: berkali kali
using namespace std;

// Fungsi utama
int main() {
	int a;
	cout << "====MENAMPILKAN DAN MENENTUKAN BILANGAN GANJIL DAN GENAP====" << endl;
	cout << "masukan bilangan ="; cin >> a;
	// menentukan kondisi ganjil atau genap
	if(a%2==0) {
		cout << a << " Bilangan tersebut adalah Genap";}
		else {
			cout << a << " Bilangan tersebut adalah bilangan ganjil";
		}
	// mengembalikan lagi ke awal
	return 0;
}
