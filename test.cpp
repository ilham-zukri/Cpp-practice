#include <iostream>

using namespace std;

int main(){

    int a = 8;
    int b = 10;
    int *aPtr;

    aPtr = &a;
    cout << aPtr << endl;
    cout << *aPtr << endl;
    *aPtr = 10;

    cout << "alamat dari a = " <<aPtr << endl;
    cout << "alamat dari pointer a = " << &aPtr;
    
}