#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double r,l,k;
	
	cout<<"Masukan Jari Jari Lingkaran = ";
	cin>>r;
	
	l = M_PI * (r*r);
	k = (2*r) * M_PI;
	
	cout<<"==========================="<<endl;
	cout<<"Luas Lingkaran = ";
	cout << l<<endl;
	cout<<"Keliling Lingkaran = ";
	cout<<k<<endl;
	cout<<"==========================="<<endl;
	cout<<"Gilang Andira Pratama"<<endl;
	cout<<"20190801349"<<endl;
	cout<<"==========================="<<endl;
	cout<<"Aulia Ilham Zukri"<<endl;
	cout<<"20190801368"<<endl;
	cout<<"==========================="<<endl;;
	
	system("pause");
	return 0;
		
}
