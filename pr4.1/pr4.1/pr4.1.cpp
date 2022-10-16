// Lab_03_4.cpp
// Бондаренко Микола
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 1

#include <iostream>
#include <cmath>


using namespace std;

int main() {
	int i, k, N;
	double S;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	//while(){}
	S = 0;
	i = k;
	while (i <= N) {
		S += pow(i, 2) / (pow(k, 2) + pow(N, 2));
		i++;
	}
	cout << S << endl;

	//do{} while()
	S = 0;
	i = k;
	do {
		S += pow(i, 2) / (pow(k, 2) + pow(N, 2));
		i++;
	} while (i <= N);
	cout << S << endl;

	//for(n++){}
	S = 0;
	for (i = k; i <= N; i++) {
			S += pow(i, 2) / (pow(k, 2) + pow(N, 2));
	}
	cout << S << endl;

	//for(n--){}
	S = 0;
	for (i = N; i >= k; i--) {
		S += pow(i, 2) / (pow(k, 2) + pow(N, 2));
	}
	cout << S << endl;

	return 0;
}