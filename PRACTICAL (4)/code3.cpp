#include <iostream>
using namespace std;

double PI = 3.14;

double circle_area(double radius) {
  return PI * radius * radius;
}

int main() {
  double radius;

  cout << "Enter the radius of the circle: ";
  cin >> radius;

  double area = circle_area(radius);

  cout << "The area of the circle is: " << area << endl;

  return 0;
}