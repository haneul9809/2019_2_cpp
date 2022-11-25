#include<iostream>
using namespace std;

class Person {
public:
	int money; //���� ������ ��
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedMoney; //����
	static void addshared(int n) {
		sharedMoney += n;
	}
};

//static ���� ����, ���� ������ ����
int Person::sharedMoney = 10; //10���� �ʱ�ȭ

//main �Լ�
int main() {
	Person han;
	han.money = 100; //han�� ���� ��=100
	han.sharedMoney = 200; //static ��� ����, ����=200

	Person lee;
	lee.money = 150;
	lee.addMoney(200);
	lee.addshared(200);

	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;
}