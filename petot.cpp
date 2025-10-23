#include <iostream>

using namespace std;

int main() {
	float nilaimtk, nilaibindo, nilaibinggris, nilaisejarah, total;
	const float ketentuan = 70;
	cout << "=====KETENTUAN KRITERIA KELULUSAN=====" << endl;
	cout << "======================================" << endl;
	cout << "Masukan nilai matematika="; cin >> nilaimtk;
	cout << "Masukan nilai bahasa indonesia="; cin >> nilaibindo;
	cout << "Masukan nilai bahasa inggris="; cin >> nilaibinggris;
	cout << "Masukan nilai sejarah="; cin >> nilaisejarah;
	total = (nilaimtk + nilaibindo + nilaibinggris + nilaisejarah) / 4;
	if (total > ketentuan) {
		cout << "\nSelamat dinyatakan anda lulus dengan nilai rata-rata: " << total;
	} else if (total < ketentuan) {
		cout << "\nAnda dinyatakan gagal dengan nilai rata-rata: " << total;
	} else {
		cout << "Anda diluluskan tapi kalau mau nambah silahkan: " << total;
	}
	return 0;
}
