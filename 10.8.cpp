// В сети интернет каждому компьютеру присваивается четырехбайтовый код, который принято записывать в виде четырех чисел, 
// каждое из которых может принимать значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов:
// 127.0.0.0, 192.168.0.1, 255.0.255.255
// Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.


#include <iostream>
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


bool IsValCell(string s) {
    
    if (s.size() > 3 || s.size() == 0)
        return false;
    
    if (s.size() > 1 && s[0] == '0')
        return false;

    for (auto c : s)
        if (c < '0' || c > '9')
            return false;
        
    int s_int = stoi(s);
    
    if (s_int > 255)
        return false;
    
    return true;
}


int main() {
    
    const char delim = '.';
    string s;
    vector<string> out;
    
    getline(cin, s);
    
    if (s.size() > 0 && s[s.size() - 1] == '.') {
        cout << "NO";
        return 0;
    }        
    
    tokenize(s, delim, out);
    
    if (out.size() != 4) {
        cout << "NO";
        return 0;
    }
    
    for (auto c : out)
        if (! IsValCell(c)) {
            cout << "NO";
            return 0;
        }
            
    cout << "YES";    
    return 0;
}
