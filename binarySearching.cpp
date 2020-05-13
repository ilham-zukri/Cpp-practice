#include<iostream> 
#include<array>
using namespace std;
 
void printArray(array<int, 10> array, int arrayLength){
    
    for (int i = 0; i < arrayLength; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    cout << "Panjang array = " << arrayLength << endl << '\n';
}

int binarySearch(array <int, 10> array, int size, int findVal)
{
    int lowest = 0,
    highest = size - 1,
    midVal;

    while (lowest <= highest)
    {
		midVal = (lowest + highest) / 2;
        if(findVal == array[midVal])
        {
            return midVal;
        }
        else if (findVal > array[midVal])
        {
            lowest = midVal + 1;
        }
        else
        {
            highest = midVal - 1;
        }
    }
 return -1;
}

 
int main()
{
    array<int, 10>array = {1, 2, 8, 12, 17, 19, 18, 22, 25, 30};

    int findVal, resultIndex, arraySize = array.size();

    printArray(array, arraySize);
    
    cout << "Masukan nilai yang ingin dicari : " ; cin >> findVal;
    
    resultIndex = binarySearch(array, array.size(), findVal);
    
    if(resultIndex >= 0)
    {
        cout << array[resultIndex] << " ditemukan pada index array ke " << resultIndex << endl;
    }
    else
    {
        cout << findVal << " tidak ditemukan " << endl;
    }

    system("pause");

    return 0;
}
