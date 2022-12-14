#include <iostream>
#include <ctime>
using namespace std;
double powerA3(double a) {
	//double res = a * a * a;
	//return res;
	return a * a * a;
}
double powerA2(double a) {
	return a * a;
}
double powerA4(double a) {
	return a * a * a * a;
}
double aMean(double x, double y) {
	return (x + y) / 2;
}
double gMean(double x, double y) {
	return sqrt(x * y);
}
double triangleP(double a) {
	return 3 * a;
}
double triangleS(double a) {
	return a * a * sqrt(3) / 4;
}
double rectP(double x1, double y1, double x2, double y2) {
	return x1 + y1 + x2 + y2;
}
double rectS(double x1, double y1, double x2, double y2) {
	return abs(y2 - y1) * abs(x2 - x1);
}
int main() {
	//proc1
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x3 = powerA3(x);
		cout << "x = " << x << " x^3 = " << x3 << endl;
	}*/
	//proc2
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x2 = powerA2(x);
		cout << "x = " << x << " x^2 = " << x2 << endl;
		double x4 = powerA4(x);
		cout << "x = " << x << " x^4 = " << x4 << endl;
	}*/
	//proc3
	/*srand(time(nullptr));
	for (int i = 1; i <= 10; i++) {
		double x1 = rand() % 101 * 0.1;
		double y1 = rand() % 101 * 0.1;
		cout << "x = " << x1 << " y = " << y1 << " sr_arifm = " << aMean(x1, y1) << " sr_geom = " << gMean(x1, y1) << endl;
	}*/
	//proc4
	/*double a;
	for (int i = 1; i <= 5; i++) {
		cout << "Vvedite storony treygolnika";
		cin >> a;
		cout << "P = " << triangleP(a) << " S = " << triangleS(a) << endl;
	}*/
	//proc5
	double x1;
	double y1;
	double x2;
	double y2;
	for (int i = 1; i <= 3; i++) {
		cout << "x1 = ";
		cin >> x1;
		cout << "x2 = ";
		cin >> x2;
		cout << "y1 = ";
		cin >> y1;
		cout << "y2 = ";
		cin >> y2;
		cout << "P = " << rectP(x1, y1, x2, y2) << " S = " << rectS(x1, y1, x2, y2) << endl;
	}

}