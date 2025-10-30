#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Masukan jumlah baris : ";
    cin>>n;

    for (int i=1;i<=n;i++){
        int bintang = 1 + (i - 1) * 1;
        for (int j=1;j<=bintang;j++){
        cout << "*";
        }
        cout<<endl;
  }    return 0;
}
