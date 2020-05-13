#include<iostream>
#include<cmath>

using namespace std;
int faktorial(int n)
    {

        if (n==0 || n == 1)
        {
            return 1;
        } else
        {
            return n * faktorial(n-1);
        }
    }



int main(){
    int val;
    cout << "Program Faktorial dengan fungsi Rekursif\n\n";
    cout << "==============================================\n\n";
    cout << "Masukan Sebuah Bilangan bulat [Integer]\n";
    cout << "Bilangan = "; cin >>val;
    cout << faktorial(val)<< "\n\n";

    system("pause");
    
}

