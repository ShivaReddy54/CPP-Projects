#include <bits/stdc++.h>
using namespace std;

// Friend function can be used by any class by declaring it in a class.

class Human{
	string name;
	int age;
	
	public:
		Human(string a = "Shiva", int b = 19){
			name = a;
			age = b;
		}
		
	friend class Student; // Friend class declaration
	
	friend void print(Human &p);  // Friend Function declaration 
		
};

void print(Human &p){  // friend function definition 
	cout << "Name: " << p.name << endl;
	cout << "Age: " << p.age << endl;
}

class Student{
	int marks;
	
	public:
		Student(int a = 935){
			marks = a;
		}
		
		void display(Human &p){   // Friend class Usage 
			cout << "Name: " << p.name << endl;
			cout << "Age: " << p.age << endl;
			cout << "Marks: " << marks << endl;
		}
};

int main(){
	Human p;
	print(p);  // friend function usage 
	 
	Student s;
	s.display(p);  // friend class reference
}