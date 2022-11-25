#include <math.h>
#include "xLine.h"
#include "xPoint.h"

xLine::xLine()
{
	this->a = xPoint(0, 0);
	this->b = xPoint(0, 0);
}


xLine::xLine(xPoint a, xPoint b)
{
	this->a = a;
	this->b = b;
}

xLine::xLine(double x1, double y1, double x2, double y2)
{
	a = xPoint(x1, y1);
	b = xPoint(x2, y2);
}

double xLine::length()
{
	double dx = b.x - a.x;
	double dy = b.y - a.y;

	return sqrt(dx * dx + dy * dy);
}
