#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);
void luasLingkaran(double jari);
double luasPersegiPanjang(double panjang, double lebar);
void luasSegitiga();

int main() {
    int user, pj, lb, pilih, luasPersegipj;
    double luas;

    cout << "Pilih salah satu pilihan di bawah ini" << endl;
    cout << "1. Luas Lingkaran" << endl;
    cout << "2. Luas Segitiga" << endl;
    cout << "3. Luas Persegi" << endl;
    cout << "Pilih dengan mengetik angka sesuai pilihan di atas" << endl;
    cin >> pilih;
    if (pilih == 1) {
        cout << "Masukkan jari-jari" << endl;
        cin >> user;
        luasLingkaran(user);
    } else {
        if (pilih == 2) {
            luasSegitiga();
        } else {
            if (pilih == 3) {
                cout << "Masukkan nilai panjang persegi panjang" << endl;
                cin >> pj;
                cout << "Masukkan nilai lebar persegi panjang" << endl;
                cin >> lb;
                luasPersegipj = luasPersegiPanjang(pj, lb);
                cout << "Luas Persegi Panjang adalah: " << luasPersegiPanjang(pj, lb) << endl;
                cout << "Part 2: " << luasPersegipj << endl;
            }
        }
    }
    return 0;
}

void luasLingkaran(double jari) {
    double luas;

    luas = jari * jari * 3.14;
    cout << "Luas lingkaran adalah: " << luas << endl;
}

double luasPersegiPanjang(double panjang, double lebar) {
    double luas;

    luas = panjang * lebar;
    
    return luas;
}

void luasSegitiga() {
    double alas, tinggi, luas;

    cout << "Masukkan nilai alas segitiga" << endl;
    cin >> alas;
    cout << "Masukkan nilai tinggi segitiga" << endl;
    cin >> tinggi;
    luas = alas * tinggi / 2;
    cout << "Luas Segitiga adalah: " << luas << endl;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

