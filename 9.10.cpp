// Дано натуральное число n > 1. Проверьте, является ли оно простым. Программа должна вывести слово YES, если число простое и NO, если число составное.
// Решение оформите в виде функции IsPrime(n), которая возвращает True для простых чисел и False для составных чисел. 
// Количество операций в программе должно быть пропорционально корню из n.


#include <iostream>
#include <cmath>
using namespace std;


bool IsPrime(int n) {
    
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}


int main() {
    
    int n;
    
    cin >> n;
    
    IsPrime(n) ? cout << "YES" : cout << "NO";
    
    return 0;
}
