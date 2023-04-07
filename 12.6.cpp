// Выведите фамилии и имена учащихся в порядке убывания их среднего балла.


#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


struct student {
    string name;
    string surname;
    int grade1;
    int grade2;
    int grade3;
};


bool cmp(student a, student b) {
    
    return a.grade1 + a.grade2 + a.grade3 > b.grade1 + b.grade2 + b.grade3;
}


int main() {
    
    int n;
    cin >> n;
    
    vector <student> a;
    string line;
    getline(cin, line);
    
    while (getline(cin, line)) {
        
        istringstream iss(line);
        student tmp;
        iss >> tmp.name >> tmp.surname >> tmp.grade1 >> tmp.grade2 >> tmp.grade3;
        a.push_back(tmp);
    }
    
    stable_sort(a.begin(), a.end(), cmp);
    
    for (auto student : a) {
        cout << student.name << " " << student.surname << endl;
    }
  
    return 0;
}
