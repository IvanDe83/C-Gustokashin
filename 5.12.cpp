// Последовательность Фибоначчи определяется так: 
// F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
// Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, то есть выведите такое число N, что F(N) = A. 
// Если А не является числом Фибоначчи, выведите число -1.


# include <iostream>
using namespace std;


int main() {
	
	int a;
	int first = 0;
	int second = 1;
	int i = 1;
	int cur = 1;
    
    cin >> a;

	if (a == 0)
		cur = 0;
	else if (a == 1)
		cur = 1;
	else
		while (cur < a) {
			cur = first + second;
			first = second;
			second = cur;
			i++;
			if (cur == a)
				break;			
		}

	cur == a ? cout << i : cout << -1;

	return 0;
}
