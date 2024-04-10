#include <iostream>
using namespace std;

inline int multy(int a, int b){
    return a * b;
}

int main() {
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    double multy = num1 * num2;

    cout << "The multy of num1 and num2 is: " << multy << endl;

    return 0;
}
