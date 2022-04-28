#include "Header.h"
int main() {
	int n;
	cin >> n; 
	int *a = new int [n];
	double *b = new double [n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 41 - 20;
		cout << a[i] << " | ";
	}
	cout << endl;
	sort(a, n);
	print(a, n);
	for (int i = 0; i < n; i++)
	{
		b[i] = (rand() % 41 - 20)*0.1;
		cout << b[i] << " | " ;
	}
	cout << endl;

	sort(b, n);
	print(b,n);
}