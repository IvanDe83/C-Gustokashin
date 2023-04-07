// Найдите в данной строке самое длинное слово и выведите его.


#include <iostream>
using namespace std;


int main() {
    
    bool flag = false;
    int cur_len = 0;
    int best_len = 0;
    int start = 0;
    int finish = 0;
    string s;
    getline(cin, s);
    s += " ";
    int i;
    
    for (i = 0; i < s.size(); i++)
        if (s[i] != ' ') {
            flag = true;
            cur_len++;
        }
        else {
            if (flag)
                if (cur_len > best_len) {
                    best_len = cur_len;
                    finish = i;
                    start = finish - cur_len;                
                }                
            flag = false;
            cur_len = 0;
        }
    
    for (int i = start; i < finish; i++)
        cout << s[i];
    
    return 0;
}
