// Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите, может ли слон попасть с первой клетки на вторую одним ходом.


# include <iostream>
using namespace std;


int main() {

	int a;
	int b;
	int c;
	int d;

	cin >> a >> b >> c >> d;

	abs(a - c) == abs(b - d) ? cout << "YES" : cout << "NO";	

	return 0;
}
