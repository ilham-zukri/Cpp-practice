#include <iostream>

using namespace std;

main(){
    int jumlahDeret;

    cout << "Masukan Jumlah deret   : "; cin >> jumlahDeret;

    int deret[jumlahDeret];

    cout << "Deret Fibonacci = ";

    for (int i = 1; i <= jumlahDeret; i++)
    {
        if(i <= 2) {
            deret[i] = 1;
        } else
        {
            deret[i] = deret[i - 1] + deret[i - 2];
        }
        cout << deret[i] << " ";
    }  
}