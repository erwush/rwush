#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int a1, a2,angka, max;
	cout<<"Input angka tertinggi: ";
	cin>>max;
	a1 = 3;
	a2 = 4;
	do {
		cout<<a1<<", ";
		cout<<a2<<", ";
		a1 = a1 + 2;
		a2 = a2 + 4;
    }while(a2<=max);



	return 0;
}
