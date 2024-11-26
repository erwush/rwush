#include <iostream>

using namespace std;

// funct jenis segi3
string jenis(int a, int b, int c){
	if(a == b || a == c || b == c) {
		return "Segitiga Sama Kaki";
	} else if( (a*a)+(b*b)==c*c || (b*b)+(c*c)==a*a || (a*a)+(c*c)==b*b) {
		return "Segitiga Siku-Siku";
	} else if(a!=b && b!=c && a!=c){
		return "Segitiga Sembaramg";
		}
}

int main(int argc, char** argv) {
	int a, b, c;
	cout<<"Input Sisi A: ";
	cin>>a;
	cout<<"Input Sisi B: ";
	cin>>b;
	cout<<"Input Sisi C: ";
	cin>>c;
	
	if(a + b > c && a + c > b && b + c > a) {
		cout<<"Sisi-sisi tersebut dapat membentul "<<jenis(a, b, c);
	} else {
		cout<<"Maaf, sisi-sisi tersebut tidak dapat membentuk segitiga apapun";
	}
	
	return 0;
}
