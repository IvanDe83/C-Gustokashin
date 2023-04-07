// Шахматный ферзь ходит по диагонали, горизонтали или вертикали. 
// Даны две различные клетки шахматной доски, определите, может ли ферзь попасть с первой клетки на вторую одним ходом.


# include <iostream>
using namespace std;


int main() {

	int a;
	int b;
	int c;
	int d;

	cin >> a >> b >> c >> d;

	(abs(a - c) == abs(b - d)) || ((a == c) || (b == d)) ? cout << "YES" : cout << "NO";	

	return 0;
}
