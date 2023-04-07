// Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, 
// при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.


# include <iostream>
using namespace std;


void sort_abc(int *a, int *b, int *c) {

	if (*a > *b)
		swap(*a, *b);
	if (*b > *c)
		swap(*b, *c);
	if (*a > *b)
		swap(*a, *b);
	if (*b > *c)
		swap(*b, *c);
}


int main() {

	int a1;
	int b1;	
	int c1;
	int a2;
	int b2;	
	int c2;
	
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

	sort_abc(&a1, &b1, &c1);
	sort_abc(&a2, &b2, &c2);	

	if (a1 == a2 && b1 == b2 && c1 == c2)
		cout << "Boxes are equal";
	else if (a1 <= a2 && b1 <= b2 && c1 <= c2)
		cout << "The first box is smaller than the second one";
	else if (a1 >= a2 && b1 >= b2 && c1 >= c2)
		cout << "The first box is larger than the second one";	
	else
		cout << "Boxes are incomparable";

	return 0;
}
