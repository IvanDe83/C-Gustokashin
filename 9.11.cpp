// Возводить в степень можно гораздо быстрее, чем за n умножений! Для этого нужно воспользоваться следующими рекуррентными соотношениями:
// an = (a2)n/2  при четном n,
// an = a × an−1 при нечетном n.
// Реализуйте алгоритм быстрого возведения в степень с помощью рекурсивной функции.


#include <iostream>
using namespace std;


double pow(double a, int n) {    
    if (n == 0)
        return 1;
    else
        if (n % 2 == 0)
            return pow(a * a, n / 2);
        else
            return a * pow(a, n - 1);
}


int main() {
    
    double a;
    int n;
    
    cin >> a >> n;
    
    cout << pow(a, n);
    
    return 0;
}
