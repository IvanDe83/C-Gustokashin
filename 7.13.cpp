// Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. 
// Элементы нужно выводить в том порядке, в котором они встречаются в списке.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    
    bool flag;
    
    int n;
    cin >> n;
    vector <int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        
        flag = true;
        
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j] && i != j) {
                flag = false;
                break;
            }
        }
        
        if (flag)
            cout << a[i] << " ";
    } 
    
    return 0;
}