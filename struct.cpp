#include <iostream>
using namespace std;

struct Buku {
    string judul;
    string jumlahHalaman;
    string pengarang ;
};

int main(){
    Buku bk;

    cout << "masukan judul =";
    cin >> bk.judul;
    cout << "masukan jumlahHalaman";
    cin >> bk.jumlahHalaman;
    cout << "masukan pengarang = ";
    cin >> bk.pengarang;

    cout << endl;
    cout << "tampilkan data buku" << endl;
    cout << endl;
    
    cout << "judul buku = " << bk.judul << endl;
    cout << "jumlahHalaman = " << bk.jumlahHalaman << endl;
    cout << "pengarang = " << bk.pengarang << endl;


}