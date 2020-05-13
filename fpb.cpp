#include<iostream>

using namespace std;

int fpb(int val1, int val2)
{
    if(val2 <= val1 && val1 % val2 == 0)
    {
        return val2;

    } else if( val1 < val2 )
    {
        return fpb(val2, val1);    
        
    } else
    {
        return fpb(val2, val1 % val2);
    }
}

int main()
{
    int bilangan1, bilangan2;

    cout << "==========================================\n";
    cout <<"-Program penghitung FPB dari 2 bilangan-\n";
    cout << "Masukan Nilai Pertama = "; cin >> bilangan1;
    cout << "Masukan Nilai Kedua   = "; cin >> bilangan2;
    cout << "FPB = " << fpb(bilangan1, bilangan2) << endl;
    cout << "==========================================\n";

    system("pause");

    return 0;

}
