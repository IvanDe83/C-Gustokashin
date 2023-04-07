// Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.


#include <iostream>
#include <set>
using namespace std;


int main() {
    
    int n;
    int m;
    int cur;
    int cnt = 0;
    set <int> s;  
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {        
        cin >> cur;
        s.insert(cur);
    }
    
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        cin >> cur;
        if (s.find(cur) != s.end())
            cnt++;
    }
    
    cout << cnt;
            
    return 0;
}
