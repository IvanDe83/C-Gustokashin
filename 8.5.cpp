// Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j


#include <iostream>
using namespace std;


int main() {
  
    int n;
    int m;
    int k;
    int l;
    
    cin >> n >> m;
    
    int a[n][m];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)            
            cin >> a[i][j];

    cin >> k >> l;

    for (int i = 0; i < n; i++)
        swap(a[i][k], a[i][l]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (j == m - 1) 
                cout << a[i][j] << endl;
            else
                cout << a[i][j] << " ";
    
    return 0;
}
