#include <iostream>
using namespace std;

void membuatsegitiga(int tinggi){
    for(int i = 0; i < tinggi; i++){
        int h = 2 * i + 1;
        for(int j = 0; j < i; j++) { cout << " "; }
        for(int j = h; j < tinggi*2; j++) { cout << "*"; }
        cout << endl;
    }
}

int main(){
    int n = 3;
    cout << "membuat segitiga terbalik" << endl;
    cout << "masukkan tinggi segitiga : " << endl;
    cin >> n;
    cout << endl;
    membuatsegitiga(n); // memanggil prosedur membuatsegitiga
}

