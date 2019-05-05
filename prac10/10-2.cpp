#include <iostream>
using namespace std;

class Poly {
private:
	int n;
	float *a;
public:
	void init();
	float value(float);
	void output();
};

void Poly::init() {
	cout << "enter n = ";
	cin >> n;
	a = new float[n+1];
	cout << "enter coef ";
	for (int i = 0; i <= n; i++) {
		cin >> a[i];
	}
};
void Poly::output() {
	for (int i = 0; i <= n; i++) {
		cout << a[i] << "* x^" << i;
		(i == n) ? (printf("\n")) : printf("+");
	}
}

float Poly::value(float x) {
	float answer = 0, term = 0;
	for (int i = 0; i <= n; i++) {
		term = a[i] * pow(x, i);
		answer += term;
	}
	return answer;
};

int main() {
	float x = 1.2;
	Poly f1, f2, f3;
	f1.init();
	f2.init();
	f3.init();
	f1.output();
	f2.output();
	f3.output();
	cout << "f1 = " << f1.value(x);
	cout << "f2 = " << f2.value(x);
	cout << "f3 = " << f3.value(x);

	system("pause");
	return 0;
}