// seperti biasa include library
#include <iostream>
// biar gak pake std std an yang banyak
using namespace std;
// fungsi utama disini
int main() {
	// mendeklarasikan variabel pilihan dengan tipe data intreger
	int pilihan;
	cout << "Menentukan lampu lalu lintas" << endl;
	cout << "Masukan Lampu :" << endl;
	cout << "1.Hijau" << endl;
	cout << "2.Merah" << endl;
	cout << "3.Orange" << endl;
	cout << "Masukan status lampu=";
	// user diminta memasukan angka
	cin >> pilihan;
	// aplikasi memilih jawaban
	if(pilihan == 1) {
		cout << "Hijau. Majuuu!!" << endl;
	} else if (pilihan == 2) {
		cout << "Merah. BERHENTI!!!" << endl;
	} else {
		cout << "Orange. Hati Hati!!" << endl;
	}
	// kode berjalan sukses
	return 0;
}
