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

	double Perimeter(); //삼각형의 세 변의 길이의 합을 return

	double Area();  //삼각형의 면적을 return
};

//----------------------------------------

#endif
