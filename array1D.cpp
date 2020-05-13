#include<iostream>
#include<conio.h>
#include<array>

using namespace std ;

int main()
{
    int i, b[5];

    for ( i = 0; i < 5; i++)
    {
        cout << "Masukan Angka index ke ["<<i<<"] = ";
        cin >> b[i];
    }

    for ( i = 0; i < 5; i++)
    {
        cout << "\nTampilan angka ke" << i+1 << " = ";
        cout << b[i] ; 
    }

    cout <<'\n';

    system("pause");
    
    
}