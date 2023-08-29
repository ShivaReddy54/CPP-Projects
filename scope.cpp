#include <bits/stdc++.h>
using namespace std;

class Human{
	public:
		string name; // Variable 
		
		void display();  // Method  declaration
};

void Human :: display(){  // Method declaration outside. "::" is Scope Resolution operator
	cout << "Name: " << name << endl;   // SRO must be public class
} 

int main(){
	Human p1;  // Object in Stack
	p1.name = "Shiva";
	p1.display();
	
	Human *p2 = new Human; // Object in Heap
	p2->name = "Harsha";
	p2->display();
	
	Human *p3 = &p1;
	p3->display();
}