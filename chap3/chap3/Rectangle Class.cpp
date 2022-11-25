#include<iostream>
using namespace std;

class Rectangle { //Rectangle 클래스 선언
public:
	int width;
	int height;
	int getArea(); //면적을 계산하여 리턴하는 함수
};

int Rectangle::getArea() { //Rectangle 클래스 구현
	return width * height;
}

int main() {
	Rectangle rect; //Rectangle을 rect로 객체 선언
	rect.width = 3;
	rect.height = 5;
	cout << "사각형 면적 : " << rect.getArea() << endl;
}