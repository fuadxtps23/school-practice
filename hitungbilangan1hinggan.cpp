-#include <iostream>
using namespace std;

int main(){
    int angka,N;
        cout<<"===Penjumlahan Bilangan 1-100 ==="<<endl;
        cout<<"Masukan Angka : ";
        cin>>angka;
        cout<<"Angka pengulangan hingga angka : ";
        cin>>N;

    while (angka<=N){
        cout << "Pejumlahan bilangan  " <<angka<<endl;
        angka*=2;
    }
    return 0;
}
