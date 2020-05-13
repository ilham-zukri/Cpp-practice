#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

void printArray(array<int, 10> array, int arrayLength){
    for (int i = 0; i < arrayLength; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    cout << "Panjang array = " << arrayLength << endl << '\n';
}

bool linearSearch(array<int,10> array, int arrayLength, int findVal){
    int i;
    bool found = false;

    for ( i = 0; i < arrayLength; i++)
    {
        if (array[i] == findVal)
        {
           found = true;
           cout << "Nilai ditemukan pada index ke " << i << endl;
        }
    }

    if (found == false)
    {
        cout << "Nilai tidak ditemukan \n";
    }
    return found;
}

main(){ 
    int arrayLength, findVal;
    array<int, 10> array;
    arrayLength = array.size();
    
    array = {3,12,15,18,13,14,20,25,21,6};
    
    printArray(array, arrayLength);

    cout << "Masukan Nilai yang ingin dicari = "; cin >> findVal;

    linearSearch(array, arrayLength, findVal);


    system("pause");

    return 0;

}