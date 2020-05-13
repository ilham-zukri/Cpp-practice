#include<iostream>
#include<cmath>

using namespace std;

int deretGanjil(int n);

int main(){
    int val, i;
    cout << "-----------Deret Ganjil-----------\n";
    cout << "Masukan panjang bilangan deret : "; cin >> val;

    for ( i = 1; i <= val*2 ; i+=2)
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
    return 0;
}

int deretGanjil(int n){
    
    if (n==1)
    {
        return 1;
    } 
    
    return (((2*n) - 1) + deretGanjil(n-1));
    
}