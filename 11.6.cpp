// Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. Все слова в словаре различны. 
// Для одного данного слова определите его синоним.


#include <iostream>
#include <map>
#include <string>
using namespace std;


int main() {
      
    int n;
    string key;
    string value;
    string cur;
    map <string, string> d;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> key;
        cin >> value;
        d[key] = value;
        d[value] = key;
    }
    
    cin >> cur;
    
    cout << d[cur];
    
    return 0;
}
