#include <bits/stdc++.h>
using namespace std;

int select, val, expo, hasil;

void deretVoid();
void deretGenapVoid();
void deretGanjilVoid();
void perpangkatanVoid();

main(){
    
    do
    {
        system("cls");
        cout << "----------Studi Kasus Deret dan Pangkat Rekursif----------\n";
        cout << "1. Deret\n";
        cout << "2. Deret Genap\n";
        cout << "3. Deret Ganjil\n";
        cout << "4. Perpangkatan\n";
        cout << "5. Exit\n\n";
        cout << "Masukan Pilihan = "; cin >> select;

        switch (select)
        {
        case 1:
            deretVoid();
            break;
        case 2:
            deretGenapVoid();
            break;
        case 3:
            deretGanjilVoid();
            break;
        case 4:
            perpangkatanVoid();
            break;
        } 
    } while (select !=5);

    system("cls");
    cout << "Nama   : Aulia Ilham Zukri\n";
    cout << "NIM    : 20190801368\n\n"; 
    
    system("pause");
    
    
}

int deret(int n){
    
    if (n==1)
    {
        return n;
    } else
    {
        return(n + deret(n-1));
    }
}

int deretGenap(int n){
    
    if (n==1)
    {
        return 2;

    } else
    {
        return (2*n + deretGenap(n-1));
    }
}

int deretGanjil(int n){
    
    if (n==1)
    {
        return 1;
    } 
    
    return (((2*n) - 1) + deretGanjil(n-1));
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

void deretVoid(){
    system("cls");
    cout << "-----------Deret-----------\n";
    cout<<"Masukan panjang bilangan deret : "; cin >> val;
    for ( int i = 1; i <= val; i++)
    {
        if (i==1)
        {
            cout << i;
        } else
        {
            cout << " + " << i;
        }
    }
    cout << " = " << deret(val) << "\n\n";
    system("pause");
}

void deretGenapVoid(){
    system("cls");
    cout << "-----------Deret Genap-----------\n";
    cout<<"Masukan panjang bilangan deret : "; cin >> val;

    for ( int i = 2; i <= val*2 ; i+=2)
    {
        if (i==2)
        {
            cout << i;

        } else
        {
            cout << " + " << i;
        }
    }

    cout << " = " << deretGenap(val) << "\n\n";
    system("pause");
}

void deretGanjilVoid(){
    system("cls");
    cout << "-----------Deret Ganjil-----------\n";
    cout << "Masukan panjang bilangan deret : "; cin >> val;

    for ( int i = 1; i <= val*2 ; i+=2)
    {
        if (i==1)
        {
            cout << i;

        } else
        {
            cout << " + " << i;
        }
    }

    cout << " = " << deretGanjil(val) << "\n\n";
    
    system("pause");

}

void perpangkatanVoid(){
    system("cls");
    cout << "----------Menghitung Pangkat----------\n";
    cout << "Masukan angka = "; cin >> val;
    cout << "Masukan pangkat = "; cin >> expo;
    system("cls");

    hasil = perpangkatan(val, expo);

    cout << "-----------------------------------\n";
    cout << val << " ^ " << expo << " = " << hasil << endl;
    cout << "-----------------------------------\n";
    system("pause");

}

