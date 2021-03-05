#include <iostream>

using namespace std;

int main() {
  float height;
  float base;

  cout << "Enter the base length of triangle (use Meter): ";
  cin >> base;

  base = base / 2;

  cout << "Enter the the height of triangle (use Meter)";
  cin >> height;

  cout << "the area of triangle is: "<< height * base << "m";
}