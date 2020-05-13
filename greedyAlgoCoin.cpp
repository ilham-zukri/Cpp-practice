#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <array>
using namespace std;

const int jumlahPecahan = 5;
array<int,jumlahPecahan> pecahan;
int jumlahCoin;


void tukarUang(int val)
{
    vector<int> hasil;

    for (int i = jumlahPecahan - 1; i >= 0; i--)
    {
        while (val >= pecahan[i])
        {
            val -= pecahan[i];
            hasil.push_back(pecahan[i]);
            jumlahCoin++;
        }
        
    }

    for (int i = 0; i < hasil.size(); i++)
    {
        cout << hasil[i] << " ";
    }

    cout << endl;
}

void pecahanUang()
{
    for (int i = 0; i < jumlahPecahan; i++)
    {
        cout << "Masukan pecahan ke-" << (i+1) << " = "; cin >> pecahan[i];
    }
    system("cls");

    cout << "Pecahan yang tersedia = ";
    for (int i = 0; i < jumlahPecahan; i++)
    {
        cout << pecahan[i] << ", ";
    }

    cout << endl;
}

main(){

    int nilai;
    system("cls");
    cout << "Masukan Nilai yang akan dipecah = "; cin >> nilai;
    pecahanUang();
    cout << "Nilai yang ingin di pecah = " << nilai << endl;
    cout << "Hasil pecahan : " << endl;
    cout << "Pecahan Coin = ";
    tukarUang(nilai);
    cout << "Jumlah Coin = " << jumlahCoin << endl;

    system("pause");
    system("cls");
    cout << " Nama  : Aulia Ilham Zukri\n";
    cout << " NIM   : 20190801368\n";
    cout << " ----------------------------------\n";
    cout << "           -Terimakasih- " << endl;
    system("pause");
    return 0;
}