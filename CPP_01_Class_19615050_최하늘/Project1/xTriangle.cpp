#include <math.h>
#include "xTriangle.h"
#include "xLine.h"
//---------------------------------------------
xTriangle::xTriangle(xPoint a, xPoint b, xPoint c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

//---------------------------------------------
xTriangle::xTriangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	a = xPoint(x1, y1);
	b = xPoint(x2, y2);
	c = xPoint(x3, y3);
}

//---------------------------------------------
double xTriangle::Perimeter() //밑변은 더하지 않음
{
	return xLine(a, b).length() +  xLine(b, c).length();
}

//---------------------------------------------
double xTriangle::Area()
{
	double len1 = xLine(a, b).length();
	double len2 = xLine(a, c).length();
	double len3 = xLine(b, c).length();
	double p = (len1 + len2 + len3) / 2.0;

	return sqrt(p * (p - len1) * (p - len2) * (p - len3));

}