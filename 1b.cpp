#include <iostream>
using namespace std;

int main() {
  char huruf = 'A';
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5 - i + 1; j++) {
      cout << huruf << " ";  
      huruf++; 
    }
    cout << endl;
  }

  return 0;
}
