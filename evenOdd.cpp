#include<iostream>
using namespace std;

main() {
    
    int val;
    string hasil;

    cout << "Masukan bilangan yang ingin di cek : "; cin >> val;

    hasil = (val % 2 == 0) ? "Genap" : "Ganjil";

    cout << hasil;
}