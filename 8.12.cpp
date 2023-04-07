// По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.


#include <iostream>
using namespace std;


int main() {
    
    int n;
    int m;
    int cnt = 1;
    string patch;
    int y;
    
    cin >> n >> m;
    
    int a[n][m];
    
    for (int i = 0; i < n + m - 1; i++)
        for (int x = 0; x < n; x++) {
            y = i - x;
            if (y >= 0 && y < m) {                
                a[x][y] = cnt;
                cnt++;
            }
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
