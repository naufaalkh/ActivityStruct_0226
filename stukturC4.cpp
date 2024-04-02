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
    Mahasiswa mhs[3];
};