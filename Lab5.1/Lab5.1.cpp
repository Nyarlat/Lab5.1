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
	return 0;
}