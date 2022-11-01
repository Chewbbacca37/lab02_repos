// Lab_04_6.cpp
// ���������� ������
// ����������� ������ � 4.6
// ������� �����
// ������ 1

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, k;
	double S, P;
	
	// ����� 1:
	S = 0;
	n = 1;
	while (n <= 10) {
		P = 1;
		k = 1;
		while (k <= n) {
			P *= 1 / pow(k, 2);
			k++;
		}
		S += sin(P) / (n + sqrt(P));
		n++;
	}
	cout << S << endl;
	
	// ����� 2:
	S = 0;
	n = 1;
	do {
		P = 1;
		k = 1;
		do {
			P *= 1 / pow(k, 2);
			k++;
		} while (k <= n);
		S += sin(P) / (n + sqrt(P));
		n++;
	} while (n <= 10);
	cout << S << endl;

	// ����� 3:
	S = 0;
	for (n = 1; n <= 10; n++) {
		P = 1;
		for (k = 1; k <= n; k++) {
			P *= 1 / pow(k, 2);
		}
		S += sin(P) / (n + sqrt(P));
	}
	cout << S << endl;

	// ����� 4:
	S = 0;
	for (n = 10; n >= 1; n--) {
		P = 1;
		for (k = n; k >= 1; k--) {
			P *= 1 / pow(k, 2);
		}
		S += sin(P) / (n + sqrt(P));
	}
	cout << S << endl;


	return 0;
}