// Последовательность Фибоначчи определяется так:
// F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
// По данному числу N определите N-е число Фибоначчи F(N).


# include <iostream>
using namespace std;


int main() {
	
	int n;
	int first = 0;
	int second = 1;
	int i = 1;
	int cur;
    
    cin >> n;

	if (n == 0)
		cur = first;
	else if (n == 1)
		cur = second;
	else
		while (i < n) {
			cur = first + second;
			first = second;
			second = cur;
			i++;			
		}
	
	cout << cur;

	return 0;
}
