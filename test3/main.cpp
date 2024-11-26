#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inisialisasi angka acak
    srand(static_cast<unsigned>(time(0)));
    int angkaRahasia = rand() % 100 + 1; // Angka rahasia antara 1-100
    int tebakan;
    int kesempatan = 10; // Jumlah kesempatan menebak

    cout << "Selamat datang di permainan tebak angka, Yang Mulia Baginda Raja yang terhormat!\n";
    cout << "Saya telah memilih sebuah angka antara 1 hingga 100.\n";
    cout << "Tugas Anda adalah menebaknya dalam " << kesempatan << " kesempatan.\n\n";

    while (kesempatan > 0) {
        cout << "Masukkan tebakan Anda: ";
        cin >> tebakan;

        if (tebakan == angkaRahasia) {
            cout << "Luar biasa! Yang Mulia Baginda Raja yang terhormat berhasil menebak angka rahasia dengan benar!\n";
            break;
        } else if (tebakan > angkaRahasia) {
            cout << "Terlalu tinggi, Yang Mulia.\n";
        } else {
            cout << "Terlalu rendah, Yang Mulia.\n";
        }

        kesempatan--;

        if (kesempatan > 0) {
            cout << "Kesempatan tersisa: " << kesempatan << "\n\n";
        } else {
            cout << "Ampun, Yang Mulia! Kesempatan Anda telah habis. Angka rahasia adalah: " << angkaRahasia << "\n";
        }
    }

    cout << "Terima kasih telah bermain, Yang Mulia Baginda Raja yang terhormat!\n";
    return 0;
}

