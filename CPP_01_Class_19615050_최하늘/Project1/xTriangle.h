#ifndef XTRIANGLE_H_2019_09_15_22_24_00
#define XTRIANGLE_H_2019_09_15_22_24_00

//----------------------------------------
#include "xPoint.h"

class xTriangle
{
public:
	xPoint a, b, c;

	xTriangle(xPoint a, xPoint b, xPoint c);

	xTriangle(double, double, double, double, double, double);

	double Perimeter(); //�ﰢ���� �� ���� ������ ���� return

	double Area();  //�ﰢ���� ������ return
};

//----------------------------------------

#endif
