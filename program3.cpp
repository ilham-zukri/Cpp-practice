#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int sks;
    string nim,  nama, matakuliah;

    float nilai1, nilai2, nilai3;

    cout << "Masukan Nama           : "; getline(cin, nama);
    cout << "Masukan NIM            : "; getline(cin, nim); 
    cout << "Masukan Mata Kuliah    : "; getline(cin, matakuliah); 
    cout << "Masukan Jumlah SKS     : "; cin >> sks;
    cout << "Masukan Nilai 1        : "; cin >> nilai1; 
    cout << "masukan Nilai 2        : "; cin >> nilai2; 
    
    system("cls");

    nilai3 = (nilai1+nilai2)/2;

    cout << "Nama           : "<< nama; cout << "\n";
    cout << "NIM            : "<< nim; cout << "\n";
    cout << "Mata Kuliah    : "<< nama; cout << "\n";
    cout << "Jumlah SKS     : "<< sks; cout << "\n";
    cout << "Nilai 1        : "<< nilai1; cout << "\n";
    cout << "Nilai 2        : "<< nilai2; cout << "\n";
    cout << "Nilai 3        : "<< nilai3; cout << "\n";

    system("pause");

}