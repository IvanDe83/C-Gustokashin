// Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. 
// Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.


#include <iostream>
#include <cmath>
using namespace std;


int main() {

	int p;
	int x;
	int y;
	int n;
	int before;
	int after;
	int bonus;
	int i = 0;	

	cin >> p >> x >> y >> n;

	while (i < n) {
		before = 100 * x + y;
		bonus = before * p / 100;
		after = before + bonus;	
		x = after / 100;
		y = after - x * 100;
		i++;
	}

	cout << x << " " << y;

	return 0;
}
