#include <iostream>
using namespace std;

int main() {
    int pilih, suhu;
    cout << "Pilih perhitungan yang ingin dilakukan: \n";
    cout << "1. Menghitung Volume Bola\n";
    cout << "2. Menghitung Volume Prisma\n";
    cout << "3. Menghitung Konversi Suhu\n";
    cout << "4. Menghitung Volume Tabung\n";
    cout << "Masukkan pilihan Anda dengan menggunakan angka 1/2/3/4: ";
    cin >> pilih;
    
    switch (pilih) {
    case 1: {
    	double rbola, vbola;
    	cout << "Input jari-jari: ";
		cin >> rbola;
		vbola = (4.0/3.0)*3.14*(rbola*rbola*rbola);
		cout << "Volume bola adalah: " << vbola;
		break;
	}
	case 2: {
		double vprism, tprism, aprism;
		cout << "Input tinggi prisma: ";
		cin >> tprism;
		cout << "Input alas prisma: ";
		cin >> aprism;
		vprism = tprism*aprism;
		cout <<"Volume prisma adalah: " << vprism;
		break;
	}
	case  3: {
		double celc, fahr, kelv, ream;
    	cout << "Pilih pengkonversian yang ingin dilakukan: \n";
    	cout << "1. Celcius ke Fahrenheit\n";
    	cout << "2. Celcius ke Kelvin\n";
    	cout << "3. Celcius ke Reamur\n";
    	cout << "4. Fahrenheit ke Celcius\n";
    	cout << "5. Fahrenheit ke Kelvin\n";
    	cout << "6. Fahrenheit ke Reamur\n";
    	cout << "7. Kelvin ke Celcius\n";
    	cout << "8. Kelvin ke Fahrenheit\n";
    	cout << "9. Kelvin ke Reamur\n";
    	cout << "10. Reamur ke Celcius\n";
    	cout << "11. Reamur ke Fahrenheit\n";
    	cout << "12. Reamur ke Kelvin\n";
    	cout << "Masukkan pilihan Anda dengan menggunakan salah satu dari angka 1 - 12: ";
    	cin >> suhu;
		switch (suhu){
			case 1: {
				cout << "Input suhu dalam satuan Celcius: ";
				cin >> celc;
				fahr = (9.0/5.0)*celc+32;
				cout << celc << " dalam satuan Celcius adalah " << fahr << " dalam satuan Fahrenheit";
				break;
			}
			case 2: {
				cout << "Input suhu dalam satuan Celcius: ";
				cin >> celc;
				kelv = celc + 273.15;
				cout << celc << " dalam satuan Celcius adalah " << kelv << " dalam satuan Kelvin";
				break;
			}
			case 3: {
				cout << "Input suhu dalam satuan Celcius: ";
				cin >> celc;
				ream = (4.0/5.0)*celc;
				cout << celc << " dalam satuan Celcius adalah " << ream << " dalam satuan Reamur";
				break;
			}
			case 4: {
				cout << "Input suhu dalam satuan Fahrenheit: ";
				cin >> fahr;
				celc = (5.0/9.0)*(fahr-32);
				cout << fahr << " dalam satuan Fahrenheit adalah " << celc << " dalam satuan Celcius";
				break;
			}
			case 5: {
				cout << "Input suhu dalam satuan Fahrenheit: ";
				cin >> fahr;
				kelv = (5.0/9.0)*(fahr-32)+273.15;
				cout << fahr << " dalam satuan Fahrenheit adalah " << kelv << " dalam satuan Kelvin";
				break;
			}
			case  6: {
				cout << "Input suhu dalam satuan Fahrenheit: ";
				cin >> fahr;
				ream = (4.0/9.0)*(fahr-32);
				cout << fahr << " dalam satuan Fahrenheit adalah " << ream << " dalam satuan Reamur";
				break;
			}
			case 7: {
				cout << "Input suhu dalam satuan Kelvin: ";
				cin >> kelv;
				celc = kelv - 273.15;
				cout << kelv << " dalam satuan Kelvin adalah " << celc << " dalam satuan Celcius";
				break;
			}
			case 8: {
				cout << "Input suhu dalam satuan Kelvin: ";
				cin >> kelv;
				fahr = (9.0/5.0)*(kelv-273.15)+32;
				cout << kelv << " dalam satuan Kelvin adalah " << fahr << " dalam satuan Fahrenheit";
				break;
			}
			case 9: {
				cout << "Input suhu dalam satuan Kelvin: ";
				cin >> kelv;
				ream = (4.0/5.0)*(kelv - 273.15);
				cout << kelv << " dalam satuan Kelvin adalah " << ream << " dalam satuan Reamur";
				break;
			}
			case 10: {
				cout << "Input suhu dalam satuan Reamur: ";
				cin >> ream;
				celc = (5.0/4.0)*ream;
				cout << ream << " dalam satuan Reamur adalah " << celc << " dalam satuan Celcius";
				break;
			}
			case 11: {
				cout << "Input suhu dalam satuan Reamur: ";
				cin >> ream;
				fahr = (9.0/4.0)*ream+32;
				cout << ream << " dalam satuan Reamur adalah " << fahr << " dalam satuan Fahrenheit";
				break;
			}
			case 12: {
				cout << "Input suhu dalam satuan Reamur: ";
				cin >> ream;
				kelv = (5.0/4.0)*ream+273.15;
				cout << ream << " dalam satuan Reamur adalah " << kelv << " dalam satuan Kelvin";
				break;
			}
		}
		break;
	}
	case 4: {
		double vtube, rtube, ttube;
		cout << "Input jari-jari tabung: ";
		cin >> rtube;
		cout << "Input tinggi tabung: ";
		cin >> ttube;
		vtube = 3.14*(rtube*rtube)*ttube;
		cout << "Volume tabung adalah: "<< vtube;
		break;
	}
	}
    

	return 0;

}

