#include <bits/stdc++.h>
using namespace std;

class A{
public:
    void print(){
        cout << "I am in A class\n";
    }
};

class B : public A{
public:
    void print(){
        A::print();
        cout << "I am in B class\n";
    }
};

int main(){
    B c;
    c.print();
}