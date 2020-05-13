#include <iostream>
#include <stdio.h>

using namespace std;

int perpangkatan(int angka, int pangkat);

int main() {
    int nilai, pangkat, hasil;
    cout << "----------Menghitung Pangkat----------\n";
    cout << "Masukan angka = "; cin >> nilai;
    cout << "Masukan pangkat = "; cin >> pangkat;
    system("cls");

    hasil = perpangkatan(nilai, pangkat);

    cout << "-----------------------------------\n";
    cout << nilai << " ^ " << pangkat << " = " << hasil << endl;
    cout << "-----------------------------------\n";
    cout << "Nama   : Aulia Ilham Zukri\n";
    cout << "NIM    : 20190801368\n\n"; 
    
    system("pause");
    return 0;
}

int perpangkatan(int angka, int pangkat){

    if (pangkat == 0)
    {
        return 1;

    } else if (pangkat > 0)
    {
        return angka * perpangkatan(angka, pangkat - 1);
    } else
    {
        return 1 / perpangkatan(angka, -pangkat);
    }
}

