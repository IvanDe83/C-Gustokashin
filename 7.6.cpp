// Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа. 
// Если соседних элементов одного знака нет - не выводите ничего. Если таких пар соседей несколько - выведите первую пару.


#include <iostream>
#include <vector>
using namespace std;


int main() {
      
    int cnt = 0;
    
    int n;
    cin >> n;
    vector <int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 1; i < n; i++)
        if (a[i] * a[i - 1] > 0) {
            a[i - 1] < a[i] ? cout << a[i - 1] << " " << a[i] : cout << a[i] << " " << a[i - 1];
            break;
        }
    
    return 0;
}
