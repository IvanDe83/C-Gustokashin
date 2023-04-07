// Выведите все исходные точки в порядке возрастания их расстояний от начала координат. 


#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;


struct point {
    int x;
    int y;
};


bool cmp(point a, point b) {    
    return pow(a.x, 2) + pow(a.y, 2) < pow(b.x, 2) + pow(b.y, 2);
}


int main() {
    
    int n;
    cin >> n;
    
    vector <point> a(n);    
    
    int x;
    int y;
    point tmp;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        cin >> y;        
        tmp.x = x;
        tmp.y = y;
        a[i] = tmp;
    }
    
    sort(a.begin(), a.end(), cmp);
    
    for (auto e : a)
        cout << e.x << " " << e.y << endl;
  
    return 0;
}
