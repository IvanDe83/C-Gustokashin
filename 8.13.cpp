// Даны числа n и m. Заполните массив размером n × m в шахматном порядке: клетки одного цвета заполнены нулями, 
// а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. В левом верхнем углу записано число 1.


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
            if ((i + j) % 2 == 0) {
                a[i][j] = cnt;
                cnt++;
            }
            else
                a[i][j] = 0;
           
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
