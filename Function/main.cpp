#include <iostream>

using namespace std;

//deklarasi prosedur
void cetaktext(string text, int jumlah)
{
	for(int i=1; i <= jumlah; i++)
		cout<<text<<endl;
}

void cetaktext()
{
	cout<<"X PPLG 1"<<endl;
}

int tambahBil(int varA, int varB){
	int varC;
	varC = varA + varB;
	// return varA + varB;
	return varC;
	varA = 10;
}

int main(int argc, char** argv) {
	
/*	cetaktext("Skibidi", 4);
	cetaktext("Sigma", 5); */
	
	cout<<"Jumlah dari 121 + 132 adalah: "<<tambahBil(121, 132)<<endl;
	
	for(int i= 1; i <= 10 jumlah; i++) //deklarasi scope variable
	
	return 0;
}

/*
#include <iostream>

using namespace std;

//deklarasi prosedur
void cetaktext()
{
	cout<<"X PPLG 1"<<endl;
}

int main(int argc, char** argv) {
	
	cetaktext();
	
	return 0;
}
*/
