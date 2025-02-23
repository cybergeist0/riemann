#define _CRT_SECURE_NO_WARNINGS
#include "sums.h"
#include <iostream>

int main() {
	freopen("c.in", "r", stdin);
	int n;
	string type;
	cin >> n >> type;
	vector<double> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	if (type == "left-riemann") {
		cout << left(x, y, n) << endl;
	}
	else if (type == "right-riemann") {
		cout << right(x, y, n) << endl;
	}
	else if (type == "trapezoidal") {
		cout << trapezoidal(x, y, n) << endl;
	}
	return 0;
}
