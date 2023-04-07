// Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main() {
      
    int min_odd = INT_MAX;
    int tmp;
    int ans = 0;
    
    int n;
    cin >> n;
    vector <int> a;
    
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp % 2 != 0)
            a.push_back(tmp);
    }  
    
    if (a.size() != 0) {      
        for (int i = 0; i < a.size(); i++)
            if (a[i] <= min_odd)
                min_odd = a[i];
        ans = min_odd;        
    }
    
    cout << ans;
    
    return 0;
}