#include <iostream>

using namespace std;


int main() {
	// part deklarasi / declare
	float b1, b2, b3, b4, b5, jum, total, bayar, kembalian, puser;
	string nama, sigma;
	
	// part awalan
	cout<<"Silahkan input nama anda: ";
	getline(cin, nama); //baca input dengan spasi
	cout<<"Halo "<<nama<<", Selamat datang di Toko Wati"<< endl;
	
	
	cout<<"Baik, berikut barang yang bisa anda beli di Toko Wati:"<< endl;
	cout<<"1. Minyak Goreng Sigma: Rp. 40.000,00"<< endl;
	cout<<"2. Gula Skibidi: Rp. 20.000,00"<< endl;
	cout<<"3. Permen +5000 Aura: Rp. 1.000,00"<< endl;
	cout<<"4: Kopi W Rizz: Rp. 80.000,00"<< endl;
	cout<<"5. Garam Ohio: Rp. 13.000,00"<< endl;
	cout<<"6. Sabun Kai Cenat: Rp. 65.000,00"<< endl;
	cout<<"7. Pasta Gigi Fanum Tax: Rp. 23.000,00"<< endl;
	cout<<"8. Jus Jambu Gyatt: Rp. 7.000,00"<< endl;
	cout<<"9. Air Putih Brainrot: Rp. 1.000.000,00"<< endl;
	cout<<"Masukkan harga barang yang ingin anda beli dengan maksimal barang yang bisa anda beli adalah 5."<< endl;
	cout<<"Jika kurang dari 5 masukkan saja angka 0."<< endl;
	
	// barang 1
	cout<<"Masukkan harga barang 1: ";
	puser = 0;
	while (puser == 0) {
	cin>>b1;
	if (b1 != 40000 && b1 != 20000 && b1 != 1000 && b1 != 80000 && b1 != 13000 && b1 != 65000 && b1 != 23000 && b1 != 7000 && b1 != 1000000) {
	cout<<"Maaf, harga dari barang yang anda masukkan tidak terdeteksi oleh sistem."<<endl;
	cout<<"Mohon masukkan harga dari barang yang tersedia di toko kami."<<endl;
	puser = 0;
	} else {
    puser = 1;
    cout<<"Masukkan jumlah barang yang ingin anda beli: ";
    cin>>jum;
    b1 = b1*jum;
	}
	}
	b1 = b1*jum;
	
	// barang 2
	cout<<"Masukkan harga barang 2: ";
	puser = 0;
	while (puser == 0) {
	cin>>b2;
	if (b2 != 40000 && b2 != 20000 && b2 != 1000 && b2 != 80000 && b2 != 13000 && b2 != 65000 && b2 != 23000 && b2 != 7000 && b2 != 1000000) {
	cout<<"Maaf, harga dari barang yang anda masukkan tidak terdeteksi oleh sistem."<<endl;
	cout<<"Mohon masukkan harga dari barang yang tersedia di toko kami."<<endl;
	puser = 0;
	} else {
    puser = 1;
    cout<<"Masukkan jumlah barang yang ingin anda beli: ";
    cin>>jum;
    b2 = b2*jum;
	}
	}
	b2 = b2*jum;
	
	// barang 3
	cout<<"Masukkan harga barang 3: ";
	puser = 0;
	while (puser == 0) {
	cin>>b3;
	if (b3 != 40000 && b3 != 20000 && b3 != 1000 && b3 != 80000 && b3 != 13000 && b3 != 65000 && b3 != 23000 && b3 != 7000 && b3 != 1000000) {
	cout<<"Maaf, harga dari barang yang anda masukkan tidak terdeteksi oleh sistem."<<endl;
	cout<<"Mohon masukkan harga dari barang yang tersedia di toko kami."<<endl;
	puser = 0;
	} else {
    puser = 1;
    cout<<"Masukkan jumlah barang yang ingin anda beli: ";
    cin>>jum;
    b3 = b3*jum;
	}
	}
	b3 = b3*jum;
	
	// barang 4
	cout<<"Masukkan harga barang 4: ";
	puser = 0;
	while (puser == 0) {
	cin>>b4;
	if (b4 != 40000 && b4 != 20000 && b4 != 1000 && b4 != 80000 && b4 != 13000 && b4 != 65000 && b4 != 23000 && b4 != 7000 && b4 != 1000000) {
	cout<<"Maaf, harga dari barang yang anda masukkan tidak terdeteksi oleh sistem."<<endl;
	cout<<"Mohon masukkan harga dari barang yang tersedia di toko kami."<<endl;
	puser = 0;
	} else {
    puser = 1;
    cout<<"Masukkan jumlah barang yang ingin anda beli: ";
    cin>>jum;
    b4 = b4*jum;
	}
	}
	b4 = b4*jum;
	
	// barang 5
	cout<<"Masukkan harga barang 5: ";
	puser = 0;
	while (puser == 0) {
	cin>>b5;
	if (b5 != 40000 && b5 != 20000 && b5 != 1000 && b5 != 80000 && b5 != 13000 && b5 != 65000 && b5 != 23000 && b5 != 7000 && b5 != 1000000) {
	cout<<"Maaf, harga dari barang yang anda masukkan tidak terdeteksi oleh sistem."<<endl;
	cout<<"Mohon masukkan harga dari barang yang tersedia di toko kami."<<endl;
	puser = 0;
	} else {
    puser = 1;
    cout<<"Masukkan jumlah barang yang ingin anda beli: ";
    cin>>jum;
    b5 = b5*jum;
	}
	}
	b5 = b5*jum;
	
	// total
	total = b1+b2+b3+b4+b5;
	cout<<"Total pembelian anda adalah: " <<total<< endl;
	
	// pembayaran
	cout<<"Silahkan masukkan nominal uang untuk pembayaran: ";
	cin>>bayar;
    while(bayar < total) {
    cout<<"Mohon bayar dengan jumlah yang sama atau lebih."<< endl;
    cout<<"Silahkan masukkan nominal uang untuk pembayaran: ";
    cin>>bayar;
    }
    kembalian = bayar - total;
    cout<<"Ini kembalian anda: Rp."<< kembalian<< endl;
    return 0;
    
}
