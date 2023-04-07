// Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.


# include <iostream>
using namespace std;


int main() {

	int n;
	int i = 1;	

	cin >> n;

	while (i <= n) {
		if (i == n) {
			cout << "YES";
			return 0;
		}
		i <<= 1;
	}
	
	cout << "NO";

	return 0;
}
