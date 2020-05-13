#include <iostream>
#include <conio.h>

using namespace std;

main(){

    int a, *b, *c;

    a = 10;
    b = &a;

    cout << "nilai dari a = " << a << endl;
    cout << "nilai dari b = " << b << endl;
    cout << "nilai sesungguhnya dari b = " << *b << endl;
    cout<< "------- mengoper nilai antar memory ------- "<< endl;

    *b = 20;

    cout << "nilai dari a = " << a << endl;
    cout << "nilai dari b = " << b << endl;
    cout << "nilai sesungguhnya dari b = " << *b << endl;
    cout<< "------- end ------- "<< endl;

    return 0;
}