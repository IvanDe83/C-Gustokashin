// Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь. Английский он к тому времени знал в совершенстве, 
// и его мечтой было изучить латынь. Поэтому попавшийся словарь был как раз кстати.
// К сожалению, для полноценного изучения языка недостаточно только одного словаря: кроме англо-латинского необходим латинско-английский. 
// За неимением лучшего он решил сделать второй словарь из первого.
// Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько слов-переводов. 
// Для каждого латинского слова, встречающегося где-либо в словаре, Вася предлагает найти все его переводы (то есть все английские слова, 
// для которых наше латинское встречалось в его списке переводов), и считать их и только их переводами этого латинского слова.
// Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.


#include <iostream>
#include <map>
#include <set>
#include <sstream> 
#include <string>
#include <vector>
using namespace std;


void tokenize(string const &str, const char delim, vector<string> &out) {
    
    stringstream ss(str);
    
    string s;
    
    while (getline(ss, s, delim))
        out.push_back(s);
}



string DeleteSpaces(string const &s) {
    
    string s_n = "";
    
    for (auto c : s)
        if (c != ' ')
            s_n += c;
    
    return s_n;
}


int main() {
    
    int n;
    string s;
    map <string, set <string>> d;
    
    cin >> n;
    getline(cin, s);
    
    for (int i = 0; i < n; i++) {
        
        getline(cin, s);
        
        s = DeleteSpaces(s);        
        
        vector<string> out;
        
        tokenize(s, '-', out);
        
        string key = out[0];
        string value = out[1];
        
        out.clear();
        
        tokenize(value, ',', out);
        
        for (int j = 0; j < out.size(); j++) {
            
            if (d.find(out[j]) == d.end()) {
                set <string> tmp_set;
                d[out[j]] = tmp_set;
            }
            
            d[out[j]].insert(key);  
        }
    }
    
    cout << d.size() << "\n";
    
    for(auto now : d) {
        
        cout << now.first << " - ";
        bool first = true;
        
        for (auto later : now.second) {
            if (!first) 
                cout << ", ";
            cout << later;
            first = false;
        }
        
        cout << "\n";
    }
    
    
      
    return 0;
}
