// По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.


#include <iostream>
using namespace std;


int main() {
  
    int n;
    int m;
    int cnt = 1;
    string patch;
    
    cin >> n >> m;
    
    int a[n][m];
    
    for (int i = 0; i < n; i++)        
        for (int j = 0; j < m; j++) {
            i % 2 == 0 ? a[i][j] = cnt : a[i][m - j - 1] = cnt;
            cnt++;
        }
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (a[i][j] < 10)
                patch = "   ";
            else if (a[i][j] < 100)
                patch = "  ";
            else
                patch = " ";
            if (j == m - 1) 
                cout << patch << a[i][j] << endl;
            else
                cout << patch << a[i][j];
        }
    
    return 0;
}
