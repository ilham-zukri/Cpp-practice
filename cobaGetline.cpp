#include<iostream>
#include<string>

using namespace std;

string firstName; string fullName;

int main(){
    cout << "First Name : ";
    getline(cin, firstName);
    cout << "Full Name  : ";
    getline(cin, fullName);

    cout << "Your First Name    : " << firstName << "\nYour Full Name     : " << fullName << "\n\n";

    system("pause"); 
}
