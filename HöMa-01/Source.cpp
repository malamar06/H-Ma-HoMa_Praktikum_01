#include <iostream>
using namespace std;
#include "CMyVektor.h"
#include "Funktionen.h"

int main()
{	


	CMyVektor control(0.2, -2.1);
	//cout << Praktikum_F_1(control);
	G_verfahren(control, Praktikum_F_1);

	//CMyVektor furfunktion2(0, 0, 0);
	//G_verfahren(furfunktion2, Praktikum_F_2, 0.1);


	return 0;
 }