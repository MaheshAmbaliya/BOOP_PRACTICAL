#include<iostream>
using namespace std;

int main(){
  int num1 , num2;
  
  cout << "Enter two numbers:";
  cin >> num1 >> num2;
  
  int sum =  num1 + num2;
  int sub = num1 - num2;
  int multi = num1 * num2;
  int div = num1 / num2;
  
  cout << "sum:" << sum << endl;
  cout << "sub:" << sub << endl;
  cout << "multi:" << multi << endl;
  cout << "div:" << div << endl;
  
return 0;
}