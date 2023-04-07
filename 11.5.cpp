// Даны два списка чисел, которые могут содержать до 100000 чисел каждый.  Выведите все числа, которые входят как в первый, 
// так и во второй список в порядке возрастания.


#include <iostream>
#include <set>
using namespace std;


int main() {
    
    int n;
    int m;
    int cur;    
    set <int> s1;
    set <int> s2;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {        
        cin >> cur;
        s1.insert(cur);
    }
    
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        cin >> cur;
        s2.insert(cur);
    }
    
    for (auto now = s1.begin(); now != s1.end(); now++)
        if (s2.find(*now) != s2.end())
            cout << *now << " ";
            
    return 0;
}
