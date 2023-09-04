#include <bits/stdc++.h>
using namespace std;

class A{
public:
    int a;
    void geta(int a){
        this->a = a;
    }
};

class B : public A{
public:
    int ab;
    void getab(int a){
        ab = a;
    }
};

class C : public B{
public:
    int abc;

    void getabc(int a){
        abc = a;
    }

    void display(){
        cout << "A: " << a << endl;
        cout << "B: " << ab << endl;
        cout << "C: " << abc << endl;
    }
};
int main(){
    C c;

    c.geta(5);
    c.getab(10);
    c.getabc(15);

    c.display();
}