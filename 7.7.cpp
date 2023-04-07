// Выведите значение наименьшего из всех положительных элементов в массиве. Известно, что в массиве есть хотя бы один положительный элемент.


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main() {
      
    int pos_min = INT_MAX;
    
    int n;
    cin >> n;
    vector <int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 1; i < n; i++)
        if (a[i] > 0 && a[i] < pos_min)
            pos_min = a[i];        
    
    cout << pos_min;
    
    return 0;
}
