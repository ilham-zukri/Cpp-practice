#include <iostream>

using namespace std;

void leftDescendingTriangle(int a);
void leftAscendingTriangle(int a);

int main()
{
    int tinggi, select;
    bool runApp = true;
    cout << "Masukan Tinggi : ";
    cin >> tinggi;

    while (runApp)
    {
        system("cls");

        cout << "1. Segitiga Siku Kiri Descending \n";
        cout << "2. Segitiga Siku Kiri Ascending \n";
        cout << "5. Exit\n";
        cout << "Select = ";
        cin >> select;
        system("cls");
        
        switch (select)
        {
        case 1:
            leftDescendingTriangle(tinggi);
            cout << "Tinggi Segitiga = " << tinggi << endl;
            break;

        case 2 :
            leftAscendingTriangle(tinggi);
            cout << "Tinggi Segitiga = " << tinggi << endl;

        case 5:
            runApp = false;
            break;
        default:
            cout << "Invalid Select";
            break;
        }
    }
}

void leftDescendingTriangle(int a)
{

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << "\n";
    }
    system("pause");
}

void leftAscendingTriangle(int a)
{
     for (int i = 1; i <= a; i++)
    {
        for (int j = a; j >= i; j--)
        {
            cout << "* ";
        }

        cout << "\n";
    }
    system("pause");
}