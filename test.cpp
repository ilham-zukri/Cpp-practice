#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j = 0;
    vector<vector<int>> arrayInt = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < arrayInt.size(); i++)
    {
        cout << arrayInt[i][j] << endl;
        j++;
    }

    j = 2;

    for (int i = 0; i < arrayInt.size(); i++)
    {
        cout << arrayInt[i][j] << endl;
        j--;
    }

    return 0;
}