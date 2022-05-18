#pragma once
#include "CMyVektor.h"

CMyVektor operator + (CMyVektor a, CMyVektor b);

CMyVektor operator*(double lambda, CMyVektor a);

double dummyfunktion1(CMyVektor punkt); //f(x) = x^2y + 5xy + y^2

CMyVektor gradient(CMyVektor x, double (*funktion)(CMyVektor x));

void G_verfahren(CMyVektor x, double (*funktion)(CMyVektor x), double lambda = 1);

double Praktikum_F_1(CMyVektor x); // erste funktion von aufgabeblatt f(x)

double Praktikum_F_2(CMyVektor x); // zweite funktion von aufgabeblatt g(x)
