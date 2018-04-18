#include "VectorOperators.h"


vector<double> operator + (const vector<double> a, const vector<double> b) {
	return { (a[0] + b[0]),(a[1] + b[1]) };
}

vector<double> operator - (const vector<double> a, const vector<double> b) {
	return { (a[0] - b[0]),(a[1] - b[1]) };
}

vector<double> operator * (const vector<double> a, const vector<double> b) {
	return { (a[0] * b[0]), (a[1] * b[0] + a[0] * b[1]) };
}

vector<double> operator / (const vector<double> a, const vector<double> b) {
	return { (a[0] / b[0]),((a[1] * b[0] - a[0] * b[1]) / b[0] / b[0]) };
}

vector<double> operator + (const vector<double> a, const double b) {
	return { (a[0] + b),a[1] };
}

vector<double> operator + (const double a, const vector<double> b) {
	return b + a;
}

vector<double> operator - (const vector<double> a, const double b) {
	return { (a[0]-b), a[1] };
}

vector<double> operator - (const double a, const vector<double> b) {
	return b - a;
}

vector<double> operator * (const vector<double> a, const double b) {
	return { (a[0] * b),(a[1] * b) };
}

vector<double> operator * (const double a, const vector<double> b) {
	return b * a;
}

vector<double> operator / (const vector<double> a, const double b) {
	return { (a[0] / b),(a[1] / b) };
}

vector<double> operator / (const double a, const vector<double> b) {
	return { (a/b[0]),((-1) * b[1]* a / b[0] / b[0]) };
}