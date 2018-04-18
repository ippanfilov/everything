#include "VectorOperators.h"
#include "VectorFunctions.h"

vector<double> f(vector<double> x);

void task(double);

int main() {
	double x;
	cout << "x = ";
	cin >> x;
	task(x);
	system("pause");
	return 0;
}

vector<double> f(vector<double> x) {
	return acos(x);
}

void task(double a) {
	cout << endl;
	cout << "f'(x) = " << f({ a,1 })[1] << endl;
}