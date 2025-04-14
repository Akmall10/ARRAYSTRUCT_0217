#include <iostream>
using namespace std;
#include <string>



struct Pengarang
{
    string nama;
    string alamat;

};

struct Buku {
    string judul;
    string jumlahHalaman;
    Pengarang pengarang;

};

int main(){
    Buku bk[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "masukan judul =";
        getline(cin, bk[i].judul);
        cin >> bk[i].judul;
        cout << "masukan jumlahHalaman";
        cin >> bk[i].jumlahHalaman;
        cout << "masukan pengarang = ";
        getline(cin, bk[i].pengarang.nama);
        cout << "masukan alamat pengarang = ";
        getline (cin, bk[i].pengarang.alamat);

    }


    cout << endl;
    cout << "tampilkan data buku" << endl;
    cout << endl;
    for ( int i = 0; i < 2; i++)
    {
        cout << "judul buku = " << bk[i].judul << endl;
        cout << "jumlahHalaman = " << bk[i].jumlahHalaman << endl;
        cout << "pengarang buku = " << bk[i].pengarang.nama << endl;
        cout << "alamat pengarang =" << bk[i].pengarang.alamat << endl;
    }
    


}