#include <iostream>

using namespace std;

int main(){

    // Ternary Opetor merupakan sebuah oparator pengganti if yang singkat;

    int jawab;
    string Jawaban;
    cout << " 1 + 1 = ";
    cin >> jawab;

    // Hasil = (Kondisi) ? Benar : Salah
    Jawaban = (jawab == 2) ? "Jawaban Anda Benar": "Jawaban Anda Salah";

    cout << Jawaban;
    cin.get();

    return 0;
}