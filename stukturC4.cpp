#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat
{ // Mendefinisikan struktur DetailAlamat untuk menyimpan informasi alamat
    string desa;
    string kota;
};

struct Mahasiswa
{ // Mendefinisikan struktur Mahasiswa untuk menyimpan informasi mahasiswa
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs[3]; // Membuat array of struct Mahasiswa dengan panjang 3 untuk menyimpan informasi 3 mahasiswa
    for (int i = 0; i < 3; i++) // Loop untuk mengisi informasi mahasisw
    {
        cout << " Nomor Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << " Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << " Alamat Mahasiswa  " << endl;
        cout << " \t Nama Desa : ";
        cin >> mhs[i].alamat.desa;
        cout << " \t Nama Kota : ";
        cin >> mhs[i].alamat.kota;
        cout << "Umur Mahasiswa :";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
        cout << "\nNIM : " << mhs[i].nim;
        cout << "\nNama : " << mhs[i].nama;
        cout << "\nAlamat : ";
        cout << "\n\tDesa : " << mhs[i].alamat.desa;
        cout << "\n\tKota : " << mhs[i].alamat.kota;
        cout << "\nUmur : " << mhs[i].umur;
        cout << endl;
    }

    return 0; // Mengindikasikan bahwa program telah berhasil dijalankan
};