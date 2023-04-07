// Во входной строке записана последовательность чисел через пробел. Для каждого числа выведите слово YES (в отдельной строке), 
// если это число ранее встречалось в последовательности или NO, если не встречалось.


#include <iostream>
#include <set>
using namespace std;


int main() {
    
    int n;
    int cur;
    set <int> s;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        
        cin >> cur;
        
        (s.find(cur) == s.end()) ? cout << "NO\n" : cout << "YES\n";
        
        s.insert(cur);
    }
    
    return 0;
}
