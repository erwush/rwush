#include <iostream>

using namespace std;

//funct ngitung koim
void koin(int kembalian) {
    int k1000, k500, k200, k100;

    k1000=kembalian/1000;
    kembalian%=1000;

    k500=kembalian/500;
    kembalian%=500;

    k200=kembalian/200;
    kembalian%=200;

    k100=kembalian/100;
    kembalian%=100;

    if (k1000 > 0)cout<<k1000<<" koin 1000" <<endl;
    if (k500 > 0)cout<<k500<<" koin 500"<<endl;
    if (k200 > 0)cout<<k200<<" koin 200"<< endl;
    if (k100 > 0)cout<<k100<<" koin 100"<<endl;
}

int main() {
	// part deklarasi / declare
	float b1, b2, b3, b4, b5, jum, total, bayar, kembalian, puser;
	string nama;
	
	// part awalan
	cout<<"Silahkan input nama anda: ";
	getline(cin, nama); //baca input dengan spasi
	system("CLS"); //menghilangkan output "Silahkan blablabla"
	cout<<"Halo "<<nama<<", Selamat datang di Toko Wati"<< endl;
	
	
	cout<<"Baik, berikut barang yang bisa anda beli di Toko Wati:"<< endl;
	cout<<"1. Minyak Goreng Sigma: Rp. 39.700,00"<< endl;
	cout<<"2. Gula Skibidi: Rp. 19.800,00"<< endl;
	cout<<"3. Permen +5000 Aura: Rp. 1.300,00"<< endl;
	cout<<"4: Kopi W Rizz: Rp. 80.000,00"<< endl;
	cout<<"5. Garam Ohio: Rp. 13.500,00"<< endl;
	cout<<"6. Sabun Looksmaxxing: Rp. 65.500,00"<< endl;
	cout<<"7. Pasta Gigi Mewing: Rp. 23.200,00"<< endl;
	cout<<"8. Jus Jambu No Cap: Rp. 7.000,00"<< endl;
	cout<<"9. Air Putih Brainrot: Rp. 1.000.000,00"<< endl;
	cout<<"Masukkan harga barang yang ingin anda beli dengan maksimal barang yang bisa anda beli adalah 5."<< endl;
	cout<<"Jika kurang dari 5 masukkan saja angka 0."<< endl;
	
	// barang 1
	cout<<"Masukkan harga barang 1: ";
	puser = 0;
	while (puser == 0) {
	cin>>b1;
	if (b1 != 39700 && b1 != 19800 && b1 != 1300 && b1 != 80000 && b1 != 13500 && b1 != 65500 && b1 != 23200 && b1 != 7000 && b1 != 1000000 && b1 != 0) {
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
	if (b2 != 39700 && b2 != 19800 && b2 != 1300 && b2 != 80000 && b2 != 13500 && b2 != 65500 && b2 != 23200 && b2 != 7000 && b2 != 1000000 && b2 != 0) {
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
	if (b3 != 39700 && b3 != 19800 && b3 != 1300 && b3 != 80000 && b3 != 13500 && b3 != 65500 && b3 != 23200 && b3 != 7000 && b3 != 1000000 && b3 != 0) {
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
	if (b4 != 39700 && b4 != 19800 && b4 != 1300 && b4 != 80000 && b4 != 13500 && b4 != 65500 && b4 != 23200 && b4 != 7000 && b4 != 1000000 && b4 != 0) {
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
	if (b5 != 39700 && b5 != 19800 && b5 != 1300 && b5 != 80000 && b5 != 13500 && b5 != 65500 && b5 != 23200 && b5 != 7000 && b5 != 1000000 && b5 != 0) {
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
	cout<<"Total pembelian anda adalah: Rp. "<<total<< endl;
	
	// pembayaran
	cout<<"Silahkan masukkan nominal uang untuk pembayaran: ";
	cin>>bayar;
    while(bayar < total) {
    cout<<"Mohon bayar dengan jumlah yang sama atau lebih."<< endl;
    cout<<"Silahkan masukkan nominal uang untuk pembayaran: ";
    cin>>bayar;
    }
    kembalian = bayar - total;
    cout<<"Kembalian anda adalah Rp. "<<kembalian<< endl;
    cout<<"Ini kembalian anda: "<<endl;
    koin(kembalian);
    
    return 0;
    
}

//note: kode ini adalah improvisasi dari kode kasir saya sebelumnya :thumbsup:
