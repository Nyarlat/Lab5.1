#include"stdio.h"
#include <iostream>

using namespace std;

class Base {
public:
	Base() {
		printf("Base()\n");
	}
	Base(Base* obj) {
		printf("Base(Base* obj)\n");
	}
	Base(Base& obj) {
		printf("Base(Base& obj)\n");
	}
	~Base() {
		printf("~Base()\n");
	}
};


class Desc :public Base {
public:
	Desc() {
		printf("Desc()\n");
	}
	Desc(Desc* obj) {
		printf("Desc(Desc* obj)\n");
	}
	Desc(Desc& obj) {
		printf("Desc(Desc& obj)\n");
	}
	~Desc() {
		printf("~Desc()\n");
	}
};

void func1(Base obj) {
	printf("func1(Base obj)\n");
}
void func2(Base* obj) {
	printf("func2(Base obj)\n");
}
void func3(Base& obj) {
	printf("func3(Base obj)\n");
}

int main() {
	Base* b1 = new Base();
	Desc* d1 = new Desc();
	func1(*b1);
	func2(b1);
	func3(*b1);
	func1(*d1);
	func2(d1);
	func3(*d1);
	printf("\n\n");

	Base b2 = new Base(b1);
	Desc d2 = new Desc(d1);
	func1(b2);
	func2(&b2);
	func3(b2);
	func1(d2);
	func2(&d2);
	func3(d2);
	printf("\n\n");

	Base* b3 = new Base(b2);
	Desc* d3 = new Desc(d2);
	func1(b3);
	func2(b3);
	func3(*b3);
	func1(d3);
	func2(d3);
	func3(*d3);


	return 0;
}