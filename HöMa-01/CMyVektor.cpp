#include "CMyVektor.h"
#include <iostream>

int CMyVektor::size()
{
	return this->get_dim();
}

void CMyVektor::clear()
{
	vektor_werte.clear();
	dimension = 0;
}

CMyVektor::CMyVektor()//default constructer fur n>4, dann kann man die Werte manuel setzen
{
	dimension = 0;
	vektor_werte.clear();
}

CMyVektor::CMyVektor(double x)//constructer fur n=1 vektoren
{
	vektor_werte.push_back(x);
	dimension = 1;
}

CMyVektor::CMyVektor(double x, double y)//constructer fur n=2 vektoren
{
	vektor_werte.push_back(x);
	vektor_werte.push_back(y);
	dimension = 2;
}

CMyVektor::CMyVektor(double x, double y, double z)//constructer fur n=3 vektoren
{
	vektor_werte.push_back(x);
	vektor_werte.push_back(y);
	vektor_werte.push_back(z);
	dimension = 3;
}

CMyVektor::CMyVektor(double x, double y, double z, double j)//constructer fur n=4 vektoren
{
	vektor_werte.push_back(x);
	vektor_werte.push_back(y);
	vektor_werte.push_back(z);
	vektor_werte.push_back(j);
	dimension = 4;
}

int CMyVektor::get_dim()//getter fur dimension
{
	return dimension;
}

void CMyVektor::set_dim(int n)//setter fur dimension
{
	dimension = n;
}

double CMyVektor::operator[](int pos)//returning double: die Wert, die in der angefragte Position steht
{
	return vektor_werte[pos];
}

void CMyVektor::set_vektor_werte(int pos, double wert)//Setzen Sie den neuen Wert in die angegebene Position
{
	vektor_werte[pos] = wert;
}

void CMyVektor::add_zu_vektor_werte(int pos, double wert)//addieren zu angefragter Vektorwerte
{
	vektor_werte[pos] += wert;
}

double CMyVektor::lenght()//return die Leange des Vektors mithilfe des Pisogars
{
	if (dimension == 1)
	{
		return vektor_werte[0];//ein dimensional vektor, kekw
	}
	if (dimension == 0)
	{
		return -666666;//Error return
	}
	double quadrat_summe = 0;
	for (int i = 0; i < dimension; i++)
	{
		quadrat_summe += vektor_werte[i] * vektor_werte[i];
	}
	return sqrt(quadrat_summe);
}

void CMyVektor::manual_push(double werte)//einfach vektor intilisierung
{
	dimension++;
	vektor_werte.push_back(werte);//nicht sooo sicher, wie push_back funktion funktioniert
} 

void CMyVektor::print()//Print der Vektor mit Mathematische Klammern Schreibung
{
	std::cout << "(";
	for (int i = 0; i < dimension; i++)
	{
		if (i == 0)
		{
			std::cout << vektor_werte[i];
		}
		else
		{
			std::cout << ", " << vektor_werte[i];
		}
	}
	std::cout << ")" << std::endl;
}