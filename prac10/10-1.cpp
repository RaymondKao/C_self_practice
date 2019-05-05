#include <iostream>
using namespace std;

class Complex {
private:
	float real, image;
public:
	Complex add(const Complex&);
	Complex sub(const Complex&);

	void input();
	void output();
};

void Complex :: input() {
	cout << "enter real, image = ";
	cin >> real >> image;
};
void Complex::output() {
	cout << real << "+ (" << image << ")i" << endl;
}

Complex Complex :: add(const Complex& c2) {
	Complex c3;
	c3.real = real + c2.real;
	c3.image = image + c2.image;
	return c3;
};
Complex Complex :: sub(const Complex& c2) {
	Complex c3;
	c3.real = real - c2.real;
	c3.image = image - c2.image;
	return c3;
};

int main() {
	Complex A, B, C, D;	//input A, B/ output C, D
	A.input();
	B.input();
	C = A.add(B);
	D = A.sub(B);
	C.output();
	D.output();

	system("pause");
	return 0;
}