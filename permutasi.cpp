#include<iostream>
#include<cmath>

using namespace std;
int faktorial(int n){
     {

        if (n==0 || n == 1)
        {
            return 1;
        } else
        {
            return n * faktorial(n-1);
        }
    }
}

int permutasi(int n, int r){

    if(n < r){

        return 0 ;
        
    } else 
    {

        return faktorial(n)/faktorial(n-r);

    }
    


}




int main(){
    int val1, val2;
    cout << "Program permutasi dengan fungsi Rekursif\n\n";
    cout << "==============================================\n\n";
    cout << "Masukan Sebuah Bilangan bulat [Integer]\n";
    cout << "Bilangan n = "; cin >>val1;
    cout << "Bilangan r = "; cin >>val2;
    cout << "Hasilnya : "<< permutasi(val1, val2)<< "\n\n";

    system("pause");
    
}
