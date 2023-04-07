// Дана последовательность чисел, завершающаяся числом 0. Найдите сумму всех этих чисел, не используя цикл.


#include <iostream>
using namespace std;


int input_sum() {
    
    int cur;
    cin >> cur;
    
    if (cur == 0)
        return cur;
    else
        return cur + input_sum();    
}


int main() {
  
    cout << input_sum();    
    
    return 0;
}
