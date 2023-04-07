// Во время проведения олимпиады каждый из участников получил свой идентификационный номер – натуральное число. 
// Необходимо отсортировать список участников олимпиады по количеству набранных ими баллов.


#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


struct man {
    int num;
    int val;
};


bool cmp(man a, man b) {
    
    if (a.val != b.val)
        return a.val > b.val;
    else
        return a.num < b.num;     
}


int main() {
    
    int n;
    cin >> n;
    
    vector <man> a(n);    
    
    int num;
    int val;
    man tmp;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        cin >> val;        
        tmp.num = num;
        tmp.val = val;
        a[i] = tmp;
    }
    
    sort(a.begin(), a.end(), cmp);
    
    for (auto e : a)
        cout << e.num << " " << e.val << endl;
  
    return 0;
}
