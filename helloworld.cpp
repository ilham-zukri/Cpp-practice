#include<iostream>
#include <iomanip>
#include<string>

using namespace std;

const int myNumb1 = 15; //declaring integer variable || constant variable (Read-Only)
bool cond1 = true; //declaring boolean variable
char char1 = 'a'; //declaring character variable || using ASCII
string str1 = "iniString"; // declaring string variable
double float1 = 3.14; // declaring float type number variable

struct Mobil
{
    string brand, model;
    int tahun, kubikasi;
};


int main(){
    Mobil mobil[3];
    getline(cin, mobil[0].brand);

    cout << mobil[0].brand;
    return 0;
}
