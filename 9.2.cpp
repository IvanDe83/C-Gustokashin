// Напишите функцию min(a, b), вычисляющую минимум двух чисел. Затем напишите функцию min4(a, b, c, d), 
// вычисляющую минимум 4 чисел с помощью функции min. Считайте четыре целых числа и выведите их минимум.


#include <iostream>
using namespace std;


int min(int a, int b) {
    int min_;
    a < b ? min_ = a : min_ = b;
    return min_;
}


int min4(int a, int b, int c, int d) {
    return min(min(a, b), min(c, d));
}


int main() {
  
    int a;
    int b;
    int c;
    int d;
    
    cin >> a >> b >> c >> d;
    
    cout << min4(a, b, c, d);
    
  return 0;
}
