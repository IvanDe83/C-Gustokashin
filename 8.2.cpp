// Найдите индексы первого вхождения максимального элемента.


#include <iostream>
using namespace std;


int main() {
  
    int n;
    int m;
    int max_elem;
    int max_i = 0;
    int max_j = 0;
    
    cin >> n >> m;
    
    int a[n][m];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    
    max_elem = a[0][0];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] > max_elem) {
                max_i = i;
                max_j = j;
                max_elem = a[i][j];
            }
    
    cout << max_i << " " << max_j;
    
    return 0;
}
