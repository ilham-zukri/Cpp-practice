#include<iostream>
using namespace std;


void siku1(int n) {
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }   
        cout << '\n';
    }
}

void siku2(int n){

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }   
        cout << '\n';
    }
}

void siku3(int n){

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }      
        cout << '\n';
    }

}

void siku4(int n){

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }   

        for (int k = n; k >= i; k--)
        {
            cout << "*";
        }      
        cout << '\n';
    }

}



main(){

    int n;
    cout << "Masukan Nilai n = "; cin >> n;
    cout << "Pola 1 : \n";
    siku1(n);
    cout << "Pola 2 : \n";
    siku2(n);
    cout << "Pola 3 : \n";
    siku3(n);
    cout << "Pola 4 : \n";
    siku4(n);
}