// По введенному символу определите, является ли он цифрой.


#include <iostream>
using namespace std;


int main() {
    
    char s;
    cin >> s;
    
    ('0' <= s) && (s <= '9') ? cout << "yes" : cout << "no";
    
    return 0;
}
