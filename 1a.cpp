#include <iostream>
using namespace std;

int main()
{
    char huruf = 'A';
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << huruf << " ";
            ++huruf;
        }
        cout << "\n";
    }
 return 0;
}