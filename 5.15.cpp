// Определите наименьшее расстояние между двумя локальными максимумами последовательности натуральных чисел, завершающейся числом 0. 
// Если в последовательности нет двух локальных максимумов, выведите число 0.
// Начальное и конечное значение при этом локальными максимумами не считаются.
// Расстоянием считается количество пробелов между элементами. В качестве примера смотрите первый тест.


# include <iostream>
# include <bits/stdc++.h>
using namespace std;


int main() {

	int prev = INT_MAX;
	int cur = INT_MAX;
	int next;
	int dist = 1;
	int min_dist = INT_MAX;
	int cnt = 0;

	cin >> next;

	while (next != 0) {

		prev = cur;
		cur = next;
		cin >> next;

		if (cur > prev && cur > next && next != 0) {
			if (cnt != 0) {
				if (dist < min_dist)
					min_dist = dist;
				dist = 1;
			}
			cnt++;
		}

		else
			if (cnt != 0) dist++;

	}

	cnt > 1 ? cout << min_dist : cout << 0;

	return 0;
}
