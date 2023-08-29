#include <bits/stdc++.h>
using namespace std;

class Human{
	string name;  // By default they are private
	int age;
	
	public:
		Human(string name, int age){  // Parametric constructor
			this->name = name;
			this->age = age;
		}
		
		Human(){  // Default constructor
			name = "No name";
			age = 0;
		}
		
		void display(){  // Method
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
};

int main(){
	Human p1("Shiva", 19);  // parametric constructor 
	p1.display();
	
	Human p2;  // default constructor
	p2.display();
	
	
}