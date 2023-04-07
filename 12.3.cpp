// В обувном магазине продается обувь разного размера. Известно, что одну пару обуви можно надеть на другую, если она хотя бы на три размера больше. 
// В магазин пришел покупатель. Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так, 
// чтобы он смог надеть их все одновременно.


#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    
    int cnt = 0;
  
    int size;
    cin >> size;
    
    int n;
    cin >> n;
    
    int cur;
    vector <int> a;
    
    for (int i = 0; i < n; i++) {
        cin >> cur;
        a.push_back(cur);
    }
    
    if (a.size() == 0) {
        cout << cnt;
        return 0;
    }
    
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; i++)
        if (size <= a[i]) {
            cnt++;
            size = a[i] + 3;
        }
    
    cout << cnt;
    
    return 0;
} 
