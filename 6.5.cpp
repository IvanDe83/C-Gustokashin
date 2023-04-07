// Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года. 
// Вклад составляет X рублей Y копеек. Определите размер вклада через год.


#include <iostream>
#include <cmath>
using namespace std;


int main() {

	int p;
	int x;
	int y;
	int before;
	int after;
	int bonus;

	cin >> p >> x >> y;

	before = 100 * x + y;
	bonus = before * p / 100;
	after = before + bonus;	
	x = after / 100;
	y = after - x * 100;

	cout << x << " " << y;

	return 0;
}
