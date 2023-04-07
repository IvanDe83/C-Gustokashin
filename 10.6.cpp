// По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).


#include <iostream>
using namespace std;


bool IsPol(string s) {
    
    int len = s.size();
    
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i])
            return false;
    
    return true;
}


int main() {    
    
    string s;
    getline(cin, s);    
    
    IsPol(s) ? cout << "yes" : cout << "no";
    
    return 0;
}
