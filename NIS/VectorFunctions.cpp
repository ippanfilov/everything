#include "VectorFunctions.h"
#include "VectorOperators.h"

vector<double> cos(const vector<double> a){
	return { (cos(a[0])) , (a[1]*(-1)*sin(a[0])) };
}

vector<double> sin(const vector<double> a) {
	return { (sin(a[0])) , (a[1]*cos(a[0])) };
}

vector<double> tan(const vector<double> a) {
	return { (tan(a[0])) , (a[1] / (cos(a[0]) * cos(a[0]))) };
}

vector<double> log(const vector<double> a) {
	return { (log(a[0])) , (a[1] / a[0]) };
}

vector<double> log10(const vector<double> a) {
	return { (log10(a[0])) , (a[1] / a[0] / log(10)) };
}

vector<double> exp(const vector<double> a) {
	return { (exp(a[0])) , (a[1] * exp(a[0])) };
}

vector<double> pow(const vector<double> a, const vector<double> b) {
	return { (pow(a[0],b[0])) , (pow(a[0],b[0]) * (b * log(a))[1]) };
}

vector<double> pow(const vector<double> a, const double b) {
	return { (pow(a[0],b)) , (b*a[1]*pow(a[0],b-1)) };
}

vector<double> pow(const double a, const vector<double> b) {
	return { (pow(a,b[0])) , (pow(a,b[0])*(log(a)*b)[1]) };
}

vector<double> sqrt(const vector<double> a) {
	return pow(a, 0.5);
}

vector<double> acos(const vector<double> a) {
	return { (acos(a[0])) , (a[1] * (-1)/sqrt(1 - pow(a[0],2))) };
}

vector<double> asin(const vector<double> a) {
	return { (asin(a[0])) , (a[1] / sqrt(1 - pow(a[0],2))) };
}

vector<double> atan(const vector<double> a) {
	return { (atan(a[0])) , (a[1] /(1 + pow(a[0],2))) };
}