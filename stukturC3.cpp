#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat
{ // Membuat stuktur variabel alamat
    string desa;
    string kota;
};

struct Mahasiswa
{ // Membuat stuktur variabel mahasiswa
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;
    cout << " Nomor Mahasiswa : ";
    getline(cin, mhs.nim);
    cout << " Nama Mahasiswa : ";
    getline(cin, mhs.nama);
    cout << " Alamat Mahasiswa  " << endl;
    cout << " \t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << " \t Nama Kota : ";
    cin >> mhs.alamat.kota;

    cout << "Umur Mahasiswa :";
    cin >> mhs.umur;
}