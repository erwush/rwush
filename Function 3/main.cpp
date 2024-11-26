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
void explode(string text, string del);

int main() {
    string kalimat, delimiter;

    cout << "Inputkan kalimat yang akan dipecah" << endl;
    cin >> kalimat;
    cout << "Inputkan delimiter" << endl;
    cin >> delimiter;
    explode(kalimat, delimiter);
    return 0;
}


void explode(string text, string del) {
    int panjang, i;
    string kata;

    i = 0;
    kata = "";
    panjang = text.length();
    while (i <= panjang) {
        if ((text + del)[i] != del) {
            kata = kata + text[i];
        } else {
            cout << kata << endl;
            kata = "";
        }
        i = i + 1;
    }
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
void explode(string text, string del);

int main() {
    string kalimat, delimiter;

    cout << "Inputkan kalimat yang akan dipecah" << endl;
    cin >> kalimat;
    cout << "Inputkan delimiter" << endl;
    cin >> delimiter;
    explode(kalimat, delimiter);
    return 0;
}

void explode(string text, string del) {
    int panjang, i;
    string kata;

    i = 0;
    kata = "";
    panjang = text.length();
    while (i <= panjang) {
        if ((text + del)[i] != del) {
            kata = kata + text[i];
        } else {
            cout << kata << endl;
            kata = "";
        }
        i = i + 1;
    }
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

