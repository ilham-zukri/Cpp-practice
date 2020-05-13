#include<iostream>
#include<cmath>

using namespace std;

int deret(int n);

int main(){
    int val, i;
    cout << "-----------Deret-----------\n";
    cout<<"Masukan panjang bilangan deret : "; cin >> val;

    for ( i = 1; i <= val; i++)
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
    return 0;
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