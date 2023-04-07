// Дано четырехзначное число. Определите, является ли его десятичная запись симметричной. 
// Если число симметричное, то выведите 1, иначе выведите любое другое целое число. 
// Число может иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись дополняется слева незначащими нулями.


# include <iostream>
using namespace std;


int main() {
	
	int cur;
	int first;
	int last;	

	cin >> cur;

	first = cur / 1000;
	last = cur % 10;
	cur = (cur - first * 1000) / 10;

	if (first != last)
		cout << 2;
	else {
		first = cur / 10;
		last = cur % 10;
		if (first != last)
			cout << 2;
		else
			cout << 1;
	}

	return 0;
}
