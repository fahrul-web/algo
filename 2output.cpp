#include <iostream>
using namespace std;

void rumus(float r, float &keliling, float &luas)
{
    // hitung keliling
    keliling = 2 * 3.14 * r;
    
    // hitung luas
    luas = 3.14 * r * r;
}

int main()
{
    float jari_jari;
    cout << "Masukkan jari-jari: ";
    cin >> jari_jari;
    
    float keliling, luas;
    rumus(jari_jari, keliling, luas);
    
    cout << "Keliling: " << keliling << endl;
    cout << "Luas: " << luas << endl;
    
  return 0;
}