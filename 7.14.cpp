// Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. 
// Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.


#include <iostream>
#include <vector>
using namespace std;


bool is_hit(int a, int b, int c, int d) {
    return (a == c || b == d || abs(a - c) == abs(b - d));
}


int main() {
    
    bool flag = false;
    
    vector <int> a(16);
    
    for (int i = 0; i < 16; i++)
        cin >> a[i];
    
    for (int i = 0; i < 14; i += 2)
        for (int j = i + 2; j < 16; j += 2) {            
            if (is_hit(a[i], a[i + 1], a[j], a[j + 1]))
                flag = true;
        }
            
    flag ? cout << "YES" : cout << "NO";    
    
    return 0;
}
