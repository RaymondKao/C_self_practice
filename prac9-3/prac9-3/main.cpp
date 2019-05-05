#include <iostream>
using namespace std;

struct complex{
    float real, imag;
};
complex add(complex C1, complex C2){
    complex C3;
    C3.real = C1.real + C2.real;
    C3.imag = C1.imag + C2.imag;
    return C3;
};
complex sub(complex C1, complex C2){
    complex C3;
    C3.real = C1.real - C2.real;
    C3.imag = C1.imag - C2.imag;
    return C3;
};
void input(complex& C){
    cout << "enter real, imag = ";
    cin >> C.real >> C.imag;
};
void output(const complex& C){
    cout << C.real << "+" << "(" << C.imag << ")i" << endl;
};

int main() {
    complex A, B, C, D;
    input(A);
    input(B);
    C = add(A, B);
    D = sub(A, B);
    output(C);
    output(D);
    
    system("pause");
    return 0;
}
