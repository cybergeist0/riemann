#include "sums.h"

double left(vector<double>& x, vector<double>& y, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += y[i] * (x[i + 1] - x[i]);
	}
	return  sum;
}

double right(vector<double>& x, vector<double>& y, int n) {
	double sum = 0;
	for (int i = 1; i < n; i++) {
		sum += y[i] * (x[i - 1] - x[i]);
	}
	return  sum;
}

double trapezoidal(vector<double>& x, vector<double>& y, int n) {
	double sum = 0;
	for (int i = 1; i < n; i++) {
		sum += (y[i] + y[i - 1]) * (x[i] - x[i - 1]) / 2;
	}
	return  sum;
}
