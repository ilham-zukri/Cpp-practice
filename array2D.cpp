#include<iostream>
#include<conio.h>
#include<array>

using namespace std;

int main(){

    int matriks[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,1,2}};
    int i, j;
    cout << "Matriks 3x4\n";
    cout << "===========\n";

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            cout << " " << matriks[i][j];
        }

        cout << "\n";
        
    }

    
    
    system("pause");

}