#include <iostream>
#include <string>
using namespace std;

string max(string a, string b) {
    return (a > b) ? a : b;
}
string max(string a, string b, string c) {
    return max(max(a, b), c);
}
int main() {
    string name1;
    string name2;
    string name3;
    
    cout << "enter first name: ";
    cin >> name1;
    
    cout << "enter second name: ";
    cin >> name2;
    
    cout << "enter third name: ";
    cin >> name3;
    
    cout << "maximum string is: " << max(name1,name2,name3);
    
    return 0;
}