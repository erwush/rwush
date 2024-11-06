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

int main() {
    int fls;
    string ngw, puser, puser2, nama, sk;

    ngw = "t";
    while (ngw == "t") {
        cout << "Pilih dengan mengetik angka yang sesuai dengan pilihan anda" << endl;
        cout << "1. Skibidi" << endl;
        cout << "2. Sigma" << endl;
        cin >> puser;
        if (puser == "1" || puser == "2") {
            if (puser == "2") {
                sk = "Sigma";
                cout << "Baik, kamu telah mimilih untuk menjadi seorang Sigma" << endl;
            } else {
                sk = "Skibidi";
                cout << "Baik, kamu telah mimilih untuk menjadi seorang Skibidi" << endl;
            }
            ngw = "f";
        } else {
            if (puser == "69") {
                sk = "Skibidi Sigma";
                cout << "Omaga, kamu memilih untuk menjadi seorang Skibidi Sigma!!! Baiklah! Kamu kujadikan seorang Skibidi Sigma!!" << endl;
                ngw = "f";
            } else {
                cout << "Nguawor, pilihanmu tidak terdeteksi oleh sistem" << endl;
                ngw = "t";
            }
        }
    }
    cout << "Apakah kamu mau sertifikat? Y/N" << endl;
    while (ngw == "f") {
        cin >> puser2;
        if (puser2 == "Y" || puser2 == "N") {
            if (puser2 == "Y") {
                cout << "Silahkan input nama anda" << endl;
                cin >> nama;
                cout << "Baiklah, berikut sertifikat anda" << endl;
                cout << "Nama: " << nama << endl;
                cout << "Title: " << sk << endl;
                cout << "Nama dengan Title: " << nama << " sang " << sk << " Legendaris" << endl;
            } else {
                cout << "Baik, kami tidak akan memberi anda sebuah sertifikat" << endl;
            }
            ngw = "t";
        } else {
            cout << "Nguawor, pilih Y/N" << endl;
        }
    }
    return 0;
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

