#include <iostream>
using namespace std;

int main() {
  int avg[10];
  int sum = 0;

  cout << "Enter 10 numbers: ";
  for (int i = 0; i < 10; i++) {
    cin >> avg[i];
    sum += avg[i];
  }

  double average = sum / 10;

  cout << "Sum of elements: " << sum << endl;
  cout << "Average of elements: " << avg << endl;

  cout << "Sorted array: ";
  for (int i = 0; i < 10; i++) {
    cout << avg[i] << " ";
  }

  return 0;
}
    