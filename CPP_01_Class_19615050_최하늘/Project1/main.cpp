#include <iostream>
#include <conio.h>
#include "xTriangle.h"
#include "xLine.h"

using namespace std;

int prompt();

int main()
{
	xTriangle t1(xPoint(-17, 4), xPoint(-9, 9), xPoint(-7, 3));
	xTriangle t2(-17, 4, -7, 3, -11, -9);
	xTriangle t3(-7, 3, -11, -9, 2, -1);
	xTriangle t4(-7, 3, 2, -1, 11, 9);
	xTriangle t5(2, -1, 11, 9, 16, -3);
	xTriangle t6(2, -1, 16, -3, 7, -9);

	cout << "다각형 면적 :" << t1.Area() + t2.Area() + t3.Area() + t4.Area() + t5.Area() + t6.Area() << endl << endl;

	xLine tr1(-9, 9, -17, 4);
	xLine tr2(-17, 4, -11, -9);
	xLine tr3(-11, -9, 2, -1);
	xLine tr4(2, -1, 7, -9);
	xLine tr5(7, -9, 16, -3);
	xLine tr6(16, -3, 11, 9);
	xLine tr7(11, 9, -7, 3);
	xLine tr8(-7, 3, -9, 9);

	cout << "다각형 둘레 : " << tr1.length()+ tr2.length()+ tr3.length()+ tr4.length()+tr5.length()+tr6.length()+ tr7.length()+tr8.length() << endl;

	//...................
	return prompt();
}

//------------------------------------------
int prompt()
{
	cout << "--------------------------------------" << endl;
	cout << "프로그램을 마치려면 아무키나 누르세요." << endl;
	return _getch();
}