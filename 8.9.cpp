// В кинотеатре n рядов по m мест в каждом (n и m не превосходят 20). В двумерном массиве хранится информация о проданных билетах, число 1 означает, 
// что билет на данное место уже продан, число 0 означает, что место свободно. Поступил запрос на продажу k билетов на соседние места в одном ряду. 
// Определите, можно ли выполнить такой запрос.


#include <iostream>
using namespace std;


int main() {
    
    int n;
    int m;
    int i;
    int cnt;
    bool flag = false;
    
    cin >> n >> m;
    
    int a[n][m];   
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    
    int k;
    
    cin >> k;
    
    for (i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0)
                cnt++;
            else
                cnt = 0;
            if (cnt == k) {                
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    
    flag ? cout << i + 1 : cout << 0;
    
    return 0;
}
