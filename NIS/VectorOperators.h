#pragma once

#include <iostream>
#include <vector>

using namespace std;

vector<double> operator + (const std::vector<double>, const vector<double>);

vector<double> operator - (const vector<double>, const vector<double>);

vector<double> operator * (const vector<double>, const vector<double>);

vector<double> operator / (const vector<double>, const vector<double>);

vector<double> operator + (const vector<double>, const double);

vector<double> operator + (const double, const vector<double>);

vector<double> operator - (const vector<double>, const double);

vector<double> operator - (const double, const vector<double>);

vector<double> operator * (const vector<double>, const double);

vector<double> operator * (const double, const vector<double>);

vector<double> operator / (const vector<double>, const double);

vector<double> operator / (const double, const vector<double>);
