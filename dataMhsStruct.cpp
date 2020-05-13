#include<iostream>
#include<string>

using namespace std;

struct Mahasiswa {
    string nama, nim;

    struct Alamat
    {
        string namaJalan, kota, provinsi;
        int nomorRumah;
    } alamat;

    struct TanggalLahir
    {
        string bulan, tempat;
        int tanggal, tahun;
    }tanggalLahir;
};

main(){
    Mahasiswa mhs1;

    mhs1.nama = "Aulia Ilham Zukri";
    mhs1.nim = "20190801368";

    mhs1.alamat.namaJalan = "Pisangan Jaya";
    mhs1.alamat.kota = "Tangerang";
    mhs1.alamat.provinsi = "Banten";
    mhs1.alamat.nomorRumah = 20;

    mhs1.tanggalLahir.tempat = "Purbalingga";
    mhs1.tanggalLahir.tanggal = 6;
    mhs1.tanggalLahir.bulan = "April";
    mhs1.tanggalLahir.tahun = 1999;

    cout << "Nama   : " << mhs1.nama << "\n";
    cout << "NIM    : " << mhs1.nim << "\n";
    cout << "Alamat :" << "\n";
    cout << "   Jalan       : " << mhs1.alamat.namaJalan << "\n";
    cout << "   Nomor       : " << mhs1.alamat.nomorRumah << "\n";
    cout << "   Kota        : " << mhs1.alamat.kota << "\n";
    cout << "   Provinsi    : " << mhs1.alamat.provinsi << "\n";
    cout << "TTL    :" << "\n";
    cout << "   Tempat      : " << mhs1.tanggalLahir.tempat << "\n";
    cout << "   Tanggal     : " << mhs1.tanggalLahir.tanggal << "\n";
    cout << "   Bulan       : " << mhs1.tanggalLahir.bulan << "\n";
    cout << "   Tahun       : " << mhs1.tanggalLahir.tahun << "\n";

    system("pause");

    return 0;
}

