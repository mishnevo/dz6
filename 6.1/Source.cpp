#include "Header.h"
int* sort(int *a,int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
	return a;

}
double* sort(double* a,int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
	return a;

}
void print(int* a,int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " | ";
	}
	cout << endl;
}
void print(double* a,int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " | ";
	}
	cout << endl;
}