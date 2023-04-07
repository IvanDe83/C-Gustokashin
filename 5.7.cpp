// Определите сумму всех элементов последовательности, завершающейся числом 0.


# include <iostream>
using namespace std;


int main() {
	
	int i;
	int cnt = 0;

	cin >> i;

	while (i != 0) {
		cnt += i;
		cin >> i;
	}
	
	cout << cnt;

	return 0;
}
