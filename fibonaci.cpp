#include<iostream>
#include<cmath>

using namespace std;

int fibonaci(int n){
    int hasil;
    
    if(n <= 2){
        hasil =  1;
    } else {
        hasil = fibonaci(n-1) + fibonaci(n-2);
    }
    return hasil;
}

int main(){

    int val;
    cout << "Program Fibonaci dengan fungsi Rekursif\n";
    cout << "==============================================\n";
    cout << "Masukan Sebuah Bilangan bulat [Integer]\n";
    cout << "Bilangan = "; cin >>val;
    cout << fibonaci(val)<< "\n\n";
    system("pause");
}