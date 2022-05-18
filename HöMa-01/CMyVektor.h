#pragma once
#include <vector>

// CMyVektor-2 alle funktionen sind optimisiert

class CMyVektor //class fur mathematische Vektor stellung
{
private:
	int dimension = 0;
	std::vector<double> vektor_werte;

public:
	CMyVektor();
	CMyVektor(double x);
	CMyVektor(double x, double y);
	CMyVektor(double x, double y, double z);
	CMyVektor(double x, double y, double z, double j);
	int get_dim();
	void set_dim(int n);
	double operator[](int pos);
	void set_vektor_werte(int pos, double wert);
	double lenght();
	void manual_push(double werte);
	void print();
	void add_zu_vektor_werte(int pos, double wert);
	void clear();
	int size();
};