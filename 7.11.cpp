// Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).


#include <iostream>
#include <vector>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    vector <int> a(n);
    
    for (int i = 0; i < n - 1; i++)
        cin >> a[i]; 
    
    int tmp;
    cin >> tmp;
    
    for (int i = n - 1; i > 0; i--)
        a[i] = a[i - 1];
    
    a[0] = tmp;
    
    for (auto now : a)
        cout << now << " ";
    
    return 0;
}
