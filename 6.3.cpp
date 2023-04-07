// Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double x;
    
    cin >> x;
    
    cout << (int) ((x - trunc(x)) * 10) << endl;
    
  return 0;
}
