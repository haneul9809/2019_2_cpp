#include <iostream>
using namespace std;



int main()
{
	double a[5];

	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

	double max = a[0];
	for (int i = 1; i < 5; i++)
		if (a[i] > max) max = a[i];
	cout << "���� ū �� = " << max << endl;
}