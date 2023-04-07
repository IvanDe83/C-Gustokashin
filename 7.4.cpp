// Найдите количество положительных элементов в данном массиве.


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
    
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            cnt++;
    
    cout << cnt;
    
    return 0;
}
