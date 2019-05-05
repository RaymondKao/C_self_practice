#include <iostream>
using namespace std;

class complex{
private:
    double real, imag;      //data members are always private
                        //if the function is only for usage within class,put here, called helping functions
public:                     //public for outer usage
    complex add(const complex&);
    complex sub(const complex&); //cannot modify the C2 after calling this function,
    void input();
    void output();
};

complex complex :: add(const complex& C2){  //call by reference
    complex C3;
    C3.real = real + C2.real;
    C3.imag = imag + C2.imag;
    return C3;
};
complex complex :: sub(const complex& C2){
    complex C3;
    C3.real = real - C2.real;
    C3.imag = imag - C2.imag;
    return C3;
};

void complex :: input(){
    cout << "enter real, imag = ";
    cin >> real >> imag;
};
void complex :: output(){
    cout << real << "+" << "(" << imag << ")i" << endl;
};

int main() {
    complex A, B, C, D;
    A.input();
    B.input();
    C = A.add(B);   //=/+is only applicable for int, double, float, but this is a compiler writen =/+
    D = A.sub(B);
    C.output();
    D.output();
    
    system("pause");
    return 0;
}
