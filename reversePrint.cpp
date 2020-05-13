#include<iostream>
using namespace std;

int reverseIntPrint(int val)
{
    int y;

    if (val != 0)
    {
        y = (val % 10);
        val = val / 10;
        
        cout << y;
    } else
    {
        return 0;
    }
    
    
    return reverseIntPrint(val);
}

main()
{
    int inp;
    cout << "Masukan nilai  = ";cin >> inp;
    cout << "Hasil          = "; reverseIntPrint(inp);
    cout  << endl;
    system("pause");
    return 0;
}