// По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, 
// выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.


#include <iostream>
using namespace std;

int main() {
    
    int n;
    int m;
    int cnt = 1;
    string patch;    
    
    cin >> n >> m;
    
    int up = n - 1;
    int down = 0;
    int left = 0;
    int right = m - 1;
    
    int a[n][m];
    
    while (cnt <= n * m) {
        
        for (int i = left; i <= right; i++) {
            a[down][i] = cnt;
            cnt++;
        }     
        if (cnt > n * m)
            break;
        down++;
        
        for (int i = down; i <= up; i++) {            
            a[i][right] = cnt;
            cnt++;
        }
        if (cnt > n * m)
            break;
        right--;
        
        for (int i = right; i >= left; i--) {
            a[up][i] = cnt;
            cnt++;
        }
        if (cnt > n * m)
            break;
        up--;
        
        for (int i = up; i >= down; i--) {
            a[i][left] = cnt;
            cnt++;
        }
        if (cnt > n * m)
            break;
        left++;
                
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
