// Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.


#include <iostream>
#include <vector>
using namespace std;


int cnt = 0;


bool IsQueenBeat(int x1, int y1, int x2, int y2) {

    return (x1 == x2) || (y1 == y2) || (abs(x1 - x2) == abs(y1 - y2));
}


bool IsCanBeAdded(int x, int y, vector<int> b) {
    
    for (int i = 0; i < b.size(); i += 2)
        if (IsQueenBeat(b[i], b[i + 1], x, y))
            return false;
    
    return true;
}


void fill_board(vector<int> b, int col, int n) {
        
    for (int i = 0; i < n; i++)
        if (IsCanBeAdded(i, col, b))
            if (col != 0) {
                vector<int> new_b;
                new_b = b;
                new_b.push_back(i);
                new_b.push_back(col);
                fill_board(new_b, col - 1, n);
            }
            else
                cnt++;
}


int main() {
   
    int n;
    cin >> n;

    vector<int> b;
    
    fill_board(b, n - 1, n);
    
    cout <<cnt;   
    
    return 0;
}
