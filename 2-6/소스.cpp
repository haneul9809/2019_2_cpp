#include <iostream>
#include <string>
using namespace std;

int main()
{	string a, b;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	getline(cin, a);
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	getline(cin, b);

	if (a == b)
		cout << "�����ϴ�.\n";
	else
		cout << "�ٸ��ϴ�.\n";
}