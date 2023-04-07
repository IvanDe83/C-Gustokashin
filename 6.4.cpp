// Даны длины сторон треугольника. Вычислите площадь треугольника.


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
  
  double a;
  double b;
  double c;
  double p;
    
  cin >> a >> b >> c;
    
  p = (a + b + c) / 2;
    
  cout << setprecision(6) << fixed << sqrt(p * (p - a) * (p - b) * (p - c));
    
  return 0;
}
