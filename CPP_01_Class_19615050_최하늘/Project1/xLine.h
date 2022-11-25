#ifndef XLINE_H_2019_09_15_22_25_00
#define XLINE_H_2019_09_15_22_25_00

//----------------------------------------
#include "xPoint.h"
class xLine
{
public:
	xPoint a;
	xPoint b;

	xLine();
	xLine(xPoint a, xPoint b);
	xLine(double, double, double, double);

	double length();

};
//----------------------------------------
#endif

