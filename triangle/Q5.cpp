#include<iostream>
using namespace std;
int main()
{
  double num1, num2, num3, num4, num5;
  double sum, average;

  cout << "Enter three Numbers :: ";
  cin >> num1 >> num2 >> num3 >> num4 >> num5;

  sum = num1 + num2 + num3 + num4 + num5;
  
  average = sum / 3;

  cout << "Sum = " << sum << endl;
  cout << "Average = " << average << endl;

  return 0;
}