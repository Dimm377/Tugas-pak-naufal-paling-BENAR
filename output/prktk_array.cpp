#include <iostream>

using namespace std;

int main () {
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    for (int i = 0; i < 7; i++) {
    if (i % 2 == 1) {
        cout << "Hari ke-" << i + 1 << ": " << hari[i] << endl;
    }

    
    }
}