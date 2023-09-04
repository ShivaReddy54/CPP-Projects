#include <bits/stdc++.h>
using namespace std;

class Persion{
public:
    int age;
    string name;
    Persion(int a, string b){
        age = a;
        name = b;
    }
};

class Student : public Persion{
public:
    int roll;
    Student(int age, string name, int a) : Persion(age, name){
        roll = a;
    }

    void display(){
        cout << age << " " << name << " " << roll;
    }
};
int main(){
    Student s(19, "Shiva", 529);
    s.display();
}