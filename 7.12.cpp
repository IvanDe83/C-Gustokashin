// Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. 
// Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    
    int cnt = 0;
    
    int n;
    cin >> n;
    vector <int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j])
                cnt++;
        
    cout << cnt;
}