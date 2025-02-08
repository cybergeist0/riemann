#include <bits/stdc++.h>
using namespace std;

int n, k;
string type;

double left(const vector<double>& x, const vector<double>& y, int subintervals) {
    double area = 0;
    for (int i = 0; i < subintervals; i++) {
        area += y[i] * (x[i + 1] - x[i]);
    }
    return area;
}

double right(const vector<double>& x, const vector<double>& y, int subintervals) {
    double area = 0;
    for (int i = 1; i <= subintervals; i++) {
        area += y[i] * (x[i] - x[i - 1]);
    }
    return area;
}

double midpoint(const vector<double>& m, const vector<double>& fm, int numMidpoints) {
    if (numMidpoints < 2)
        return 0; 
    vector<double> b(numMidpoints + 1);
    b[0] = m[0] - (m[1] - m[0]) / 2.0;
    for (int i = 0; i < numMidpoints - 1; i++) {
        b[i + 1] = (m[i] + m[i + 1]) / 2.0;
    }
    b[numMidpoints] = m[numMidpoints - 1] + (m[numMidpoints - 1] - m[numMidpoints - 2]) / 2.0;
    
    double area = 0;
    for (int i = 0; i < numMidpoints; i++) {
        double width = b[i + 1] - b[i];
        area += fm[i] * width;
    }
    return area;
}

double trapezoidal(const vector<double>& x, const vector<double>& y, int subintervals) {
    double area = 0;
    for (int i = 0; i < subintervals; i++) {
        double dx = x[i + 1] - x[i];
        area += ((y[i] + y[i + 1]) / 2.0) * dx;
    }
    return area;
}

int main() {
    freopen("c.in", "r", stdin);
    freopen("c.out", "w", stdout);

    cin >> n >> type >> k;
    vector<double> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    if (type == "left") {
        cout << left(x, y, k) << endl;
    } else if (type == "right") {
        cout << right(x, y, k) << endl;
    } else if (type == "trapezoidal") {
        cout << trapezoidal(x, y, k) << endl;
    } else if (type == "midpoint") {
        // only takes midpoint set
        cout << midpoint(x, y, n) << endl;
    }
    return 0;
}
