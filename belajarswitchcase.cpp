#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int a,b,hasil;
	char operasi;
	cout << "PROGRAM PENJUMLAHAN DAN PENGURANGAN" << endl;
	cout << "Masukan angka pertama:"; cin >> a;
	cout << "PILIH OPERASI BILANGAN";
	cout << "Masukan Operator (+, -, *, /): "; cin >> operasi;
	cout << "Masukan angka kedua:"; cin >> b;
	switch(operasi) {
		case '+':
			hasil = a+b;
			break;
		case '-':
			hasil = a-b;
			break;
		case '*':
			hasil = a*b;
			break;
		case '/':
			if (b!=0){
			hasil = a/b;
			break;
			} else {
				cout << "Tidak bisa membagi dengan nol" << endl;
				return 1;
			}
			break;
		default:
			cout << "Operator tidak valid" << endl;
			return 1;
	}
	cout << "Hasil = " << hasil << endl;
	return 0;
}
