#include <bits/stdc++.h>
using namespace std;

class Car{
public:
    string name;
    int speed;

    Car(string b, int a){
        name = b;
        speed = a;
    }
};

class Engine{
public:
    int gears;
    Engine(int a){
        gears = a;
    }
};

class Lambo : Car, Engine{
public:
    string color;
    Lambo(string a, int b, int c, string d):Car(a,b), Engine(c){
        color = d;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Speed: " << speed << "kmph"<< endl;
        cout << "Horspower: " << gears << endl;
        cout << "Color: " << color << endl;
    }
};
int main(){
    Lambo l("Lambo", 450, 6, "Red");
    l.display();
}