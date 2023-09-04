#include <bits/stdc++.h>
using namespace std;

class Data {
public:
    int a = 5, b = 10;
};

class Addition : public Data{
public:
    void addi(){
        cout << a + b << endl;
    }
};

class Pro : Data{
public:
    void mul(){
        cout << a * b;
    }
};
int main(){
    Addition a;
    a.addi();

    Pro b;
    b.mul();
}