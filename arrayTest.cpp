#include<iostream>
#include<array>
using namespace std;

main(){

    int hapusArray, panjangArray, arrayNumber[20], i;
   
    cout << "Panjang array : "; cin >> panjangArray;

    for ( int i = 0; i < panjangArray; i++)
    {
        cout << "Input array index ke -"<<i<< " : "; cin>> arrayNumber[i];
    }

    cout<< "\n";


    //Menampilkan isi array
    for ( i = 0; i < panjangArray; i++)
    {
        cout << "Isi array index ke-"<<i<< " : " << arrayNumber[i] << "\n";
    }

    //menghapus index array
    cout << "\nHapus index array ke : "; cin >> hapusArray; cout << "\n";
    for ( int i = hapusArray; i < panjangArray; i++)
    {
        arrayNumber[i] = arrayNumber[i+1];
    }

    //Menampilkan  Array setelah dihapus 

    for ( i = 0; i < panjangArray - 1; i++)
    {
        cout << "Isi array index ke-"<< i << " = " << arrayNumber[i] << "\n";
    }
}
