#include<iostream>

using namespace std;

int deretGenap(int n);

int main(){
    int val, i;
    cout << "-----------Deret Genap-----------\n";
    cout << "Masukan panjang bilangan deret : "; cin >> val;

    for ( i = 2; i <= val*2 ; i+=2)
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
    return 0;   
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