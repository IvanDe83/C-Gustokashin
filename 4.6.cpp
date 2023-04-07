// Даны три целых числа. Определите, сколько среди них совпадающих. 
// Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).


# include <iostream>
using namespace std;


int main() {

	int a;
	int b;
	int c;
	int cnt; 

	cin >> a >> b >> c;

	cnt =  (a == b) + (a == c) + (b == c);

	(cnt == 1) ? cout << 2 : cout << cnt;

	return 0;
}
