#include <bits/stdc++.h>
using namespace std;

class Human{
	protected:  
		string name = "Shiva"; 
	public:
		int age = 19;
};

class Student : public Human{  // Everything is public so all can be accessed
	public:
		void print(){
			cout << name << " "<< age << endl;;
		}	
};

class A : protected Human{  // Private members cant be accessed 
	public:
		void print(){
			cout << name << " "<< age << endl;;
		}
};

class B : private Human{   // Private membesr cant be accessed
	public:
		void print(){ 
			cout << name << " "<< age << endl;;
		}
};

int main(){
	Student s;
	s.print();
	
	A a;
	a.print();
	
	B b;
	b.print();
}          