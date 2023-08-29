#include <bits/stdc++.h>
using namespace std;

// Types of constructors and constructor overloading.

class Human{
	string name;  // By default they are private
	int age;
	
	public:
		Human(string name, int age){  // Parametric constructor
			this->name = name;
			this->age = age;
		}
		
		Human(Human &p1){  // Default constructor
			name = p1.name;
			age = p1.age;
		}
				
		void display(){  // Method
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
};

int main(){
	Human p1("Shiva", 19);  // parametric constructor 
	p1.display();
	
	Human p2(p1);
	p2.display();
}