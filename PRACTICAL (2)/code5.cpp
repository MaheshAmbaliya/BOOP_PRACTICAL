#include <iostream>

using namespace std;

int globalVariable = 27;

int main() {
    int localVariable = 14;

    cout << "Value of local variable: " << localVariable << endl;
    cout << "Value of global variable: " << globalVariable << endl;

    return 0;
}
