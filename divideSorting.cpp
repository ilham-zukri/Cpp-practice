#include <iostream>
#include <conio.h>

using namespace std;

void printArray(int *array, int size);
void mergeSort(int *array, int left, int right);

int main()
{
    int n;
    int arr[n];
    cout << "=============Divide(Merge) Sort=============\n";
    cout << "Count of number    : ";
    cin >> n;
    cout << "Input number       : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "   data " << (i+1) << " = ";
        cin >> arr[i];
    }

    system("cls");
    cout << "Before Sorting  : ";
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting   : ";
    printArray(arr, n);
    cout << "\n" << endl;
    system("pause");

    system("cls");
    cout << "Aulia Ilham Zukri\n";
    cout << "20190801368\n";

    system("pause");
    return 0;
}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void merge(int *array, int left, int mid, int right)
{
    int i, j, k, nLeft, nRight;
    nLeft = mid - left + 1;
    nRight = right - mid;

    int leftArr[nLeft];
    int rightArr[nRight];

    for (i = 0; i < nLeft; i++)
        leftArr[i] = array[left + i];

    for (j = 0; j < nRight; j++)
        rightArr[j] = array[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < nLeft && j < nRight)
    {
        if (leftArr[i] <= rightArr[j])
        {
            array[k] = leftArr[i];
            i++;
        }
        else
        {
            array[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < nLeft)
    {
        array[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < nRight)
    {
        array[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int *array, int left, int right)
{
    int mid;
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);
        merge(array, left, mid, right);
    }
}