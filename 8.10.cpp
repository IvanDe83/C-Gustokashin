// Дан прямоугольный массив размером n×m. Поверните его на 90 градусов по часовой стрелке, записав результат в новый массив размером m×n.


#include <iostream>
using namespace std;


int main() {
    
    int n;
    int m;
    
    cin >> n >> m;
    
    int a[n][m];
    int b[m][n];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            b[j][n - i - 1] = a[i][j];
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (j == n - 1) 
                cout << b[i][j] << endl;
            else
                cout << b[i][j] << " ";   
    
    return 0;
}