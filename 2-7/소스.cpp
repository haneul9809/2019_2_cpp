#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[20];

	while (1)
	{
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(a, 20);

		if (strcmp(a, "yes") == 0) break;
	}
	cout << "�����մϴ�\n";

}