// Отсортируйте массив.


#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
  
    int n;
    cin >> n;
    
    int cur;
    vector <int> v;
    
    for (int i = 0; i < n; i++) {
    
        cin >> cur;
        v.push_back(cur);        
    }
    
    sort(v.begin(), v.end());
    
    for (auto now: v)
        cout << now << " ";
    
    return 0;
} 
