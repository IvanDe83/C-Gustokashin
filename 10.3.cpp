// Переведите символ в верхний регистр.


#include <iostream>
using namespace std;


int main() {
    
    char c;
    cin >> c;
    
    ('a' <= c) && (c <= 'z') ? cout << (char) ('A' + c - 'a') : cout << c; 
    
    return 0;
} 
