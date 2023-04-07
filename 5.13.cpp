// Дана последовательность натуральных чисел, завершающаяся числом 0. Определите, какое наибольшее число подряд идущих элементов этой последовательности 
// равны друг другу. Если не нашлось ни одной пары, тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.


# include <iostream>
using namespace std;


int main() {	
	
	int prev = -1;
	int cnt;
	int max_cnt = 1;
	int i;
    
    cin >> i;

    if (i == 0)
    	cout << 0;

	while (i != 0) {

		if (i != prev) {
			cnt = 1;
			prev = i;
		} else {
			cnt++;
			if (cnt > max_cnt)
				max_cnt = cnt;
		}

		cin >> i;
	}

	cout << max_cnt;

	return 0;
}
