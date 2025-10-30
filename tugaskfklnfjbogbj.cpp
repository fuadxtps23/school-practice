#include <iostream>
using namespace std;

void loopingpakedowhile() {
    int i;
    i = 9;
    do {
        cout << i << " ";
        i-=2;
    } while (i>=1);
}

void loopingpakefor() {
    for (int i =9;i>=1; i-=2) {
    cout << i << " ";
    }
}

void loopingpakewhile() {
    int i;
    i = 9;
    while (i>=1) {
        cout << i << " ";
        i-=2;
    }
}


int main() {
    int pilihan;
    cout << "Mau pake yang mana?\n1.For\n2.While\n3.Do While" << endl;
    cout << "Masukan pilihan: "; cin >> pilihan;
    if (pilihan == 1) {
        cout << "\n";
        loopingpakefor();
    } else if (pilihan == 2) {
        cout << "\n";
        loopingpakewhile();
    } else if (pilihan == 3) {
        cout << "\n";
        loopingpakedowhile();
    } else {
        cout << "Pilihan tidak valid.";
    }
    return 0;
}
