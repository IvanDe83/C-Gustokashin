// Шахматная ладья ходит по горизонтали или вертикали. 
// Даны две различные клетки шахматной доски, определите, может ли ладья попасть с первой клетки на вторую одним ходом.


# include <iostream>
using namespace std;


int main() {

	int a;
	int b;
	int c;
	int d;

	cin >> a >> b >> c >> d;

	(a == c) || (b == d) ? cout << "YES" : cout << "NO";	

	return 0;
}
