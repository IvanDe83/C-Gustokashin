// Дан список целых чисел, который может содержать до 100000 чисел. Определите, сколько в нем встречается различных чисел.


#include <iostream>
#include <set>
using namespace std;


int main() {
    
    int n;
    int cur;
    set <int> s;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> cur;
        s.insert(cur);
    }
    
    cout << s.size();
    
    return 0;
}
