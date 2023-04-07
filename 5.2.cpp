// По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.


# include <iostream>
using namespace std;


int main() {

	int n;
	int i = 1;
	int sq = i * i;

	cin >> n;

	while (sq <= n) {
		cout << sq << " ";
		i++;
		sq = i * i;
	}

	return 0;
}
