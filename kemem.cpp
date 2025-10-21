// aku bikin fungsi sendiri btw :3
#include <iostream>
using namespace std;

// fungsi makanan
void makanan() {
	int mp, harga, juml, total;
	cout << "1. mie nyemek bangladesss     Rp 15.000" << endl;
	cout << "2. egg goreng                 Rp 9.000" << endl;
	cout << "Mau 1 atau 2? "; cin >> mp;
	if (mp == 1) {
		harga = 15000;
		cout << "Jumlah Pesanan: "; cin >> juml;
		total = harga * juml;
		cout << "Total harga pemesanan adalah " << total;
	} else if (mp == 2) {
		harga = 9000;
		cout << "Jumlah Pesanan: "; cin >> juml;
		total = harga * juml;
		cout << "Total harga pemesanan adalah " << total;
	} else {
		cout << "Pilihan mu ngaco" << endl;
	}
}

// fungsi minuman
void minuman() {
	int mp, harga, juml, total;
	cout << "1. es teh anget           Rp 3.000" << endl;
	cout << "2. es milo panas          Rp 5.000" << endl;
	cout << "Kamu pilih yang mana? "; cin >> mp;
	if (mp == 1) {
		harga = 3000;
		cout << "Jumlah Pesanan: "; cin >> juml;
		total = harga * juml;
		cout << "Total harga pemesanan adalah " << total;
	} else if (mp == 2) {
		harga = 5000;
		cout << "Jumlah Pesanan: "; cin >> juml;
		total = harga * juml;
		cout << "Total harga pemesanan adalah " << total;
	} else {
		cout << "Pilihan mu ngwur" << endl;
	}
}

// fungsi utama
int main() {
	int pilihan;
	cout << "===Warung Mdodeds===" << endl;
	cout << "Menu warung kami" << endl;
	cout << "1. Makanan\n2. Minuman" << endl;
	cout << "Silahkan pilih mau apa: "; cin >> pilihan;
	// tinggal panggil fungsi
	if (pilihan == 1) {
		makanan();
	} else if (pilihan == 2) {
		minuman();
	} else {
		cout << "PILIHAN MU GA ADA!!!" << endl;
	}
	return 0;
}
