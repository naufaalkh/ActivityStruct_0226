#include <iostream>
using namespace std;

struct Mahasiswa
{ // Membuat stuktur variabel
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs; // Input stuktur data
    cout << " Nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout << " Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << " Alamat Mahasiswa : ";
    cin >> mhs.alamat;
    cout << " Umur Mahasiswa : ";
    cin >> mhs.umur;
}