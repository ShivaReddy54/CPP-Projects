#include <bits/stdc++.h>
using namespace std;

class Persion{
public:
    Persion(){
        cout << "Base class constructor " << endl;
    }
    ~Persion(){
        cout << "Base class destructor " << endl;
    }
};

class Student : public Persion{
public:
    Student(){
        cout << "Derived class constructor " << endl;
    }
    ~Student(){
        cout << "Derived class destructor " << endl;
    }
};
int main(){
    Student s;
}