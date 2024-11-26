#include <iostream>
using namespace std;

int main() {
    int angka;
	int var;

    do {
        cout <<"hanya menerima angka dari 10-100 dan kelipatan 10"<<endl;
        cout <<"masukkan sebuah angka = ";
        cin>>angka;
        var = angka % 10;
		cout<<var<<endl;
		           
    } while((var != 0) || (angka <= 10 || angka >= 100 ) );    

    return 0;
}
