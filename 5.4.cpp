// По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.


# include <iostream>
using namespace std;


int main() {

	int n;
	int i = 1;	

	cin >> n;

	while (i <= n) {
		cout << i << " ";
		i <<= 1;
	}

	return 0;
}
