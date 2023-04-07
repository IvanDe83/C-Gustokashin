// Дано положительное действительное число X. Выведите его дробную часть.


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    double x;
    
    cin >> x;
    
    cout << setprecision(6) << fixed << x - trunc(x) << endl;
    
  return 0;
}
