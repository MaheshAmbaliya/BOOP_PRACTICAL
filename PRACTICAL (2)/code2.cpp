#include <iostream>
using namespace std;

int main() {
  int rows = 4;
  int start = 1;

for (int i = 1; i <= rows; ++i) {


    for (int j = 1; j <= rows - i; ++j) {
      cout << " ";
    }

    for (int j = 1; j <= i; ++j) {
      cout << start++ << " ";
    }
    
    cout << endl;
  
    }
return 0;
}