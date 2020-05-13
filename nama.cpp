#include <iostream>
#include <string>

using namespace std ;


int main() {

    string nama;
    string nim ;
    string fakultas;
    string prod;

    cout << "Masukan nama Anda      : \n";
    getline(cin , nama) ; 
    cout << "Masukan NIM Anda       : \n";
    getline (cin , nim) ;
    cout << "Masukan Fakultas Anda  : \n";
    getline(cin , fakultas) ;
    cout << "Masukan Prodi Anda     : \n";
    getline(cin , prod) ;

    system("cls");

    cout << "Nama       : " << nama <<"\n";
    cout << "NIM        : " << nim <<"\n";
    cout << "Fakultas   : " << fakultas<<"\n";
    cout << "Prodi      : " << prod<<"\n";

    system("pause");

    return 0 ;

    

}