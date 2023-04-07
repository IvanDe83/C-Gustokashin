// Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.


#include <iostream>
#include <vector>
using namespace std;


int main() {
      
    int cnt = 1;
    
    int n;
    cin >> n;
    vector <int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    if (a.size() != 0)      
        for (int i = 1; i < a.size(); i++)
            if (a[i - 1] < a[i])
                cnt++;
    
    cout << cnt;
    
    return 0;
}
