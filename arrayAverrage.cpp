#include<iostream>          //Aulia Ilham Zukri
#include<iomanip>           //20190801368
#include<array>             //Teknik Informatika

using namespace std;

int totalComput(int arr[], int arrayLength) {
    int total = 0;

    for (int i = 0; i < arrayLength; i++)
    {
        total += arr[i];
    }

    cout << "\n";
    cout << "Total dari hasil penjumlahan isi array = " << total << "\n\n";

    return total;
}

int averageComput(int total, int arrayLength){
    float avg = (float)total/(float)arrayLength;

    cout << "Rata-rata dari total penjumlahan nilai isi array adalah = " << fixed << setprecision(2) << avg ;
    cout << "\n\n";

    return 0;

}

main() {

    int arrayLength; 

    cout << "Masukan panjang array : "; cin >> arrayLength; system("cls");

    int arrayInt[arrayLength];

    for (int i = 0; i < arrayLength; i++)
    {
        cout << "Masukan nilai array ke " << i+1 << " : " ; cin >> arrayInt[i];
        system("cls");
    }

    for ( int i = 0; i < arrayLength; i++)
    {
        cout << "array[" << i <<"] = " << arrayInt[i] << "\n"; 
    }
    
    cout << "Array Length = " << arrayLength << "\n"; 

    averageComput(totalComput(arrayInt, arrayLength), arrayLength);
 
    cout << "================================================================\n";
    cout << "Aulia Ilham Zukri \n" << "20190801368 \n" << "Teknik Informatika \n";
    cout << "================================================================\n\n";

    system("pause");

    return 0;

}

