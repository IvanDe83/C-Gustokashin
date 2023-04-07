// Дано натуральное число, выведите его последнюю цифру.


# include <iostream>
using namespace std;

int main() {
	
	int n;
	int cur;

	cin >> n;

	cur = n % 10;

	while (cur >= 10) {
		cur %= 10;
	} 

	cout << cur << endl;
	
	return 0;
}
