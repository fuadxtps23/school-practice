#include <iostream>

using namespace std;

int main() {
	int pilihan;
	cout << "Menentukan lampu lalu lintas" << endl;
	cout << "Masukan Lampu :" << endl;
	cout << "1.Hijau" << endl;
	cout << "2.Merah" << endl;
	cout << "3.Orange" << endl;
	cout << "Masukan status lampu=";
	cin >> pilihan;
	if(pilihan == 1) {
		cout << "Hijau. Majuuu!!" << endl;
	} else if (pilihan == 2) {
		cout << "Merah. BERHENTI!!!" << endl;
	} else {
		cout << "Orange. Hati Hati!!" << endl;
	}
	return 0;
}
