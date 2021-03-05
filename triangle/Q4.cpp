#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int logx;
	double result_log;
  double root, result_root;
  double sinx, result_sin;
  double cosx, result_cos;
  double final_result;
  
  
  
  cout << "Enter sin value: ";
  cin >> sinx;
  cout << "Enter cos value: ";
  cin >> cosx;
  cout << "Enter log value: ";
  cin >> logx;
  

  result_cos = cos(cosx);
  result_sin = sin(sinx);
	result_log = log (logx);
  

  final_result = result_sin + result_cos / result_log;
  root = final_result;

  result_root = sqrt(root);

  cout << "Z = " << root;
	
	return 0;
}