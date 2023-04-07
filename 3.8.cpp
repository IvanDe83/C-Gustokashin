// На вход дается натуральное число N. Выведите следующее за ним четное число


# include <iostream>
using namespace std;

int main() {
	
	int n;

	cin >> n;	
	n % 2 == 0 ? cout << n + 2 << endl : cout << n + 1 << endl;
	
	return 0;
}
