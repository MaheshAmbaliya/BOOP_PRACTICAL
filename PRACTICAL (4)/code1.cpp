#include <iostream>
using namespace std;

void sortNumbers(int &a, int &b){
    
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Before sorting: " << num1 << "" << num2 << endl;
    
    sortNumbers(num1,num2);

    cout << "After sorting: " << num1 << "" << num2 << endl;

    return 0;
}
