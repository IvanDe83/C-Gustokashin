// Дана строка, содержащая пробелы. Найдите, сколько в ней слов (слово – это последовательность непробельных символов, слова разделены одним пробелом, 
// первый и последний символ строки – не пробел).


#include <iostream>
using namespace std;


int main() {
    
    bool flag = false;
    int cnt = 0;
    string s;
    getline(cin, s);
    int i;
    
    for (i = 0; i < s.size(); i++)
        if (s[i] != ' ') {
            flag = true;
        }
        else {
            if (flag)
                cnt++;
            flag = false;
        }
    
    if (s[i] != ' ')
        cnt++;
    
    cout << cnt;
    
    return 0;
}
