#include<iostream>
#include<array>
#include <bits/stdc++.h>

using namespace std;

array<int,100> arrayInt;
int arraySize = arrayInt.size();

void printDataSelection(array<int,100> array, int size, string selection){
    
    if(selection == "odd"){
        for (int i = 0; i < size; i++)
        {
            if(array[i] % 2 == 0){
                continue;
            }
        
            cout << "array[" << i << "] = " << array[i] << endl;
        }
    } else if(selection == "even"){

        for (int i = 0; i < size; i++)
        {
            if(array[i] % 2 != 0){
                continue;
            }
        
            cout << "array[" << i << "] = " << array[i] << endl;
        }

    } else
    {
        cout << "Selection Err";
    }
}

void randomArray(){
    srand(time(NULL));
    bool found;
    int j;

    for (int i = 0; i < arraySize; i++)
    {   
        found = true;
        j = 0;
        arrayInt[i] = rand() % 200 + 1;

        if (i > 0){
            
            while (j < i && found == true)
            {
                if (arrayInt[i] == arrayInt[j]){
                    arrayInt[i] = rand() % 100 + 1;
                    
                } else
                {
                    found = false;
                    j++;
                }
            }   
        }
    }
}
void switchpos(int a, int b)
{
    int temp;
    temp = arrayInt[b];
    arrayInt[b] = arrayInt[a];
    arrayInt[a] = temp;
}

void quickSort(int L, int R)
{
    int i,j, midVal;
    i = L;
    j = R;

    midVal = arrayInt[(L + R) / 2];

    do
    {
      while (arrayInt [i] < midVal) i++;
      while (arrayInt[j] > midVal) j--;
      if(i <=j)
      {
        switchpos(i,j);
        i++;
        j--;
      };
    }

    while (i < j);
    if(L < j) quickSort(L,j);
    if(i < R) quickSort(i,R);

}

void printArray(){

    for (int i = 0; i < arraySize; i++)
    {
        cout << "array[" << i << "] = " << arrayInt[i] << endl;
    }
}


main(){

    string selection;

    randomArray();
    quickSort(0, arraySize - 1);
    printArray(); cout << endl;

    cout << "odd / even? "; cin >> selection;

    if (selection == "ganjil")
    {
        cout << "Odd value Data     :" << endl;
    } else if (selection == "genap")
    {
        cout << "Odd value Data     :" << endl;
    }
    
    printDataSelection(arrayInt, arraySize, selection);

}