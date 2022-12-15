#include <iostream>
using namespace std;

void rumus(float r)
{
    float k,l;
    // hitung keliling
    k = 2 * 3.14 * r;
    
    // hitung luas
    l = 3.14 * r * r;

    cout << "Keliling: " << k << endl;
    cout << "Luas: " << l << endl;
    
}

int main()
{
    float jari_jari;
    cout << "Masukkan jari-jari: ";
    cin >> jari_jari;
    
        rumus(jari_jari);

    
    return 0;
}