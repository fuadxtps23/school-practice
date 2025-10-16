// Harus di include
#include <iostream>
#include <string>

// Biar teu pake std std an kaya std::cout jadi cout aja
using namespace std;

// Fungsi utama
int main() {
    // Deklarasiin si variabel nya
    char huruf;
    string kata;
    float angka;
    // disini baru si cout dan cin nya sama kawan kawan
    cout << "Masukan huruf="; cin >> huruf;
    cout << "Masukan angka="; cin >> angka;
    cout << "Masukan kata="; cin >> kata;
    cout << "huruf yang anda masukan adalah=" << huruf << "\n";
    cout << "angka yang anda masukan adalah=" << angka << "\n";
    cout << "kata yang anda masukan adalah=" << kata << "\n";
    // si return ini gunanya buat ngembaliin lagi ke awal
    return 0;
}
