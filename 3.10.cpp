// Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.


# include <iostream>
using namespace std;


int main() {

	int r;
	int c;
	int n;

	cin >> r >> c >> n;
	cout << (r * 100 + c) * n / 100 << " " << (r * 100 + c) * n % 100;

	return 0;
}
