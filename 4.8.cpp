// Шахматный король ходит по горизонтали, вертикали и диагонали, но только на 1 клетку. 
// Даны две различные клетки шахматной доски, определите, может ли король попасть с первой клетки на вторую одним ходом.


# include <iostream>
using namespace std;


int main() {

	int a;
	int b;
	int c;
	int d;

	cin >> a >> b >> c >> d;

	(abs(a - c) <= 1) && (abs(b - d) <= 1) ? cout << "YES" : cout << "NO";	

	return 0;
}