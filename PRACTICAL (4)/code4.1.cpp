#include<iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}
int max(int a, int b, int c) {
    return max(max(a, b), c);
}
int main() {
    int num1;
    int num2;
    int num3;
    
   
    cout << "enter frist number: ";
    cin >> num1;
    
    cout << "enter second number: ";
    cin >> num2;
   
    cout << "enter third number: ";
    cin >> num3;
    
    cout << " maximum number is: " << max(num1, num2, num3);
    
    return 0;
}