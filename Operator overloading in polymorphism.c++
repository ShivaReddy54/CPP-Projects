#include <bits/stdc++.h>
using namespace std;

class Complex{
public:
    int real, img;
    Complex(int a=0, int b=0){
        real = a;
        img = b;
    }

    void print(){
        cout << real << "+" << img << "i" << endl;
    }

    Complex operator +(Complex& a){
        Complex temp;
        temp.real = a.real + real;
        temp.img = a.img + img;

        return temp;
    }
};

int main(){
    Complex a(2,3);
    a.print();

    Complex b(3,2);
    b.print();

    Complex c = a + b;
    c.print();

}