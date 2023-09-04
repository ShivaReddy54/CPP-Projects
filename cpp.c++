#include <bits/stdc++.h>
using namespace std;

class Persion{
protected: // It can be any other then Private
    int age;
    string name;

    Persion(int a=19, string b = "Shiva"){
        age = a;
        name = b;
    }
};

class Student : Persion{ // It can be any private too 
public:
    void display(){
        cout << age << " " << name;
    }
};

int main(){
    Student s;
    s.display();
}