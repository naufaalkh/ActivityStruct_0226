#include <iostream>
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
