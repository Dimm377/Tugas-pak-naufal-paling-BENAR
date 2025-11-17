#include <iostream>
using namespace std;

int main()
{
      cout << " Kasus 2 : Compound Assignment " << endl;
      cout << "==============================" << endl;
      cout << "Nama : Dimas Putra Wijaya" << endl;
      cout << "NIM : A11.2025.16431" << endl;
      cout << "==============================" << endl;
      int x = 5;
      int y = 3;

      cout << "Awal   : x = " << x << ", y = " << y << endl;

      x += 1;
      cout << "Langkah 1 (x += 1)  : x = " << x << ", y = " << y << endl;

      x += y;
      cout << "Langkah 2 (x += y)  : x = " << x << ", y = " << y << endl;

      y -= 1;
      cout << "Langkah 3 (y -= 1)  : x = " << x << ", y = " << y << endl;

      y -= x;
      cout << "Langkah 4 (y -= x)  : x = " << x << ", y = " << y << endl;

      x *= (y + 1);
      cout << "Langkah 5 (x *= y + 1) : x = " << x << ", y = " << y << endl;

      y /= 3;
      cout << "Langkah 6 (y /= 3)  : x = " << x << ", y = " << y << endl;

      cout << "\nHasil akhir: x = " << x << ", y = " << y << endl;

      return 0;
}
