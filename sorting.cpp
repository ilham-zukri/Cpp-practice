#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <array>

int arrayInt[100], arrayInt2[100];
int n;

void switchpos(int a, int b)
{
    int temp;
    temp = arrayInt[b];
    arrayInt[b] = arrayInt[a];
    arrayInt[a] = temp;
}

void bubbleSort()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n -1 ; j >= i; j--)
        {
            if (arrayInt[j] < arrayInt[j-1])  switchpos(j, j-1);
        }
    }
    std::cout << "bubble sort selesai!" << std::endl;
}

void merge(int lowVal, int highVal, int midVal)
{
	int i, j, k, temp[highVal-lowVal+1];
	i = lowVal;
	k = 0;
	j = midVal + 1;
 
	while (i <= midVal && j <= highVal)
	{
		if (arrayInt[i] < arrayInt[j])
		{
			temp[k] = arrayInt[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = arrayInt[j];
			k++;
			j++;
		}
	}
 
	while (i <= midVal)
	{
		temp[k] = arrayInt[i];
		k++;
		i++;
	}
 
	while (j <= highVal)
	{
		temp[k] = arrayInt[j];
		k++;
		j++;
	}
 
	for (i = lowVal; i <= highVal; i++)
	{
		arrayInt[i] = temp[i-lowVal];
	}
}

void mergeSort(int lowVal, int highVal)
{
	int midVal;
	if (lowVal < highVal)
	{
		midVal=(lowVal+highVal)/2;
		mergeSort( lowVal, midVal);
		mergeSort( midVal+1, highVal);
		merge(lowVal, highVal, midVal);
	}

}

void selectionSort()
{
    int pos, i, j;

    for ( i = 0; i < n-1; i++)
    {
        pos = i;

        for ( j = (i+1); j < n; j++)
        {
            if(arrayInt[j] < arrayInt[pos]) pos = j;
        }
        if(pos != i) switchpos(pos,i);        
    }
    std::cout << "selection sort selesai!" << std::endl;
}

void insertionSort()
{
    int temp,i,j ;

    for ( i = 1; i < n; i++)
    {
        temp = arrayInt[i];
        j = i - 1;

        while (arrayInt[j] > temp && j >= 0)
        {
            arrayInt[j + 1] = arrayInt[j];
            j--;
        }
        arrayInt[j+1] = temp;
    }
    std::cout << "Insertion sort selesai!" << std::endl;
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

void input()
{
    std::cout << "Masukan Panjang Array = "; std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Masukan data array ke-"<<(i+1)<< " = "; std::cin >> arrayInt[i];
        arrayInt2[i] = arrayInt[i];
    }
}

int printArr(int array[])
{
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

void printsortedArr()
{
    std::cout << "===============================\n";
    std::cout << "Sebelum diurutkan : \n";
    printArr(arrayInt2);
    std::cout << "Sesudah diurutkan : \n";
    printArr(arrayInt);
    std::cout << "===============================\n";
}

void suffleArr()
{
    for (int i = 0; i < n; i++)
    {
       arrayInt[i] = arrayInt2[i];
    }
    std::cout << "Data sudah teracak kembali!" << std::endl;
}

int main()
{
    int selection;
    system("cls");

    do
    {
        system("cls");
        std::cout << "-------Sorting-------" << std::endl;
        std::cout << "Sorting Menu : " << std::endl;
        std::cout << " 1. Input Data" << std::endl;
        std::cout << " 2. Bubble Sort" << std::endl;
        std::cout << " 3. Selection Sort" << std::endl;
        std::cout << " 4. Insertion Sort" << std::endl;
        std::cout << " 5. Merge Sort" << std::endl;
        std::cout << " 6. Quick Sort" << std::endl;
        std::cout << " 7. Tampilkan Data" << std::endl;
        std::cout << " 8. Acak Data" << std::endl;
        std::cout << " 9. exit" << std::endl;
        std::cout << "Masukan Pilihan Anda = "; std::cin >> selection;

        switch (selection)
        {
        case 1:
            input(); break;
        case 2:
            bubbleSort(); 
            printsortedArr(); break;
        case 3:
            selectionSort(); 
            printsortedArr(); break;
        case 4:
            insertionSort(); 
            printsortedArr(); break;
        case 5:
            mergeSort(0, n-1);
            std::cout << "Merge Sort Selesai!\n";
            printsortedArr(); break;
        case 6:
            quickSort(0, n-1); 
            std::cout << "Quick Sort Selesa!\n";
            printsortedArr(); break;
        case 7:
            std::cout << "Isi Data  : ";
            printArr(arrayInt); break;
        case 8:
            suffleArr(); break;
        }

        system("pause");

    } while (selection !=9);    
    
    return 0;
}
