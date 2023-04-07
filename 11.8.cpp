// Учительница задала Пете домашнее задание — в заданном тексте расставить ударения в словах, после чего поручила Васе проверить это домашнее задание. 
// Вася очень плохо знаком с данной темой, поэтому он нашел словарь, в котором указано, как ставятся ударения в словах. 
// К сожалению, в этом словаре присутствуют не все слова. Вася решил, что в словах, которых нет в словаре, он будет считать, 
// что Петя поставил ударения правильно, если в этом слове Петей поставлено ровно одно ударение.
// Оказалось, что в некоторых словах ударение может быть поставлено больше, чем одним способом. Вася решил, что в этом случае если то, 
// как Петя поставил ударение, соответствует одному из приведенных в словаре вариантов, он будет засчитывать это как правильную расстановку ударения, 
// а если не соответствует, то как ошибку.
// Вам дан словарь, которым пользовался Вася и домашнее задание, сданное Петей. Ваша задача — определить количество ошибок, 
// которое в этом задании насчитает Вася.


#include <algorithm>
#include <cctype>
#include <map>
#include <iostream>
#include <set>
#include <sstream> 
#include <string>
#include <vector>
using namespace std;


string ToLower(const string &s) {    
       
    string s_l = s;
    
    transform(s_l.begin(), s_l.end(), s_l.begin(), [](unsigned char c) {
        return tolower(c);
    });
    
    return s_l;
}


void SaveStress(const string &s, map <string, set <int>> &d) {
    
    string s_l;
    s_l = ToLower(s);
    
    if (d.find(s_l) == d.end()) {
        set <int> new_s;
        d[s_l] = new_s;
    }
    
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'A' & s[i] <= 'Z')
            d[s_l].insert(i);
}


void tokenize(string const &str, const char delim, vector<string> &out) {
    
    stringstream ss(str);
    
    string s;
    
    while (getline(ss, s, delim))
        out.push_back(s);
}


int main() {
    
    int cnt = 0;
    
    int n;
    cin >> n;
    
    string s;
    getline(cin, s);
    
    map <string, set <int>> d;
    
    for (int i = 0; i < n; i++) {
        getline(cin, s);        
        SaveStress(s, d);    
    }
        
    getline(cin, s);
    
    vector<string> out;
    tokenize(s, ' ', out);
    
    for (auto word : out) {
    
        string w_l;
        w_l = ToLower(word);
        
        set <int> stresses;
        
        for (int i = 0; i < word.size(); i++)
            if (word[i] >= 'A' & word[i] <= 'Z')
                stresses.insert(i);
        
        if (stresses.size() != 1) {
            cnt++;
            continue;
        }
        
        if (d.find(w_l) == d.end()) {
            if (stresses.size() != 1) {                
                cnt++;                
            }
        }
        else { 
            
            for (auto st : stresses) {
                
                if (d[w_l].find(st) == d[w_l].end()) {
                    cnt++;
                    break;
                }
            }    
        }    
        
    }
    
    cout << cnt;
    
    return 0;
}
