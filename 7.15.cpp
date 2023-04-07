// N кеглей выставили в один ряд, занумеровав их слева направо числами от 1 до N. Затем по этому ряду бросили K шаров, 
// при этом i-й шар сбил все кегли с номерами от li до ri включительно. Определите, какие кегли остались стоять на месте.


#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    int left;
    int right;
    
    int k;
    cin >> k;
    
    vector <string> a(n, "I");
    
    for (int i = 0; i < k; i++) {
        cin >> left;
        left--;
        cin >> right;        
        for (int j = left; j < right; j++)
            a[j] = ".";
    }        
    
    for (auto now : a)
        cout << now;
    
    return 0;
}
