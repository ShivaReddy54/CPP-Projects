#include <bits/stdc++.h>
using namespace std;

// Inheritence can access public and protected only not private.

// Single Inheritence
class Human{
	protected:  // It can be public but not private
		string name;
		int age;
	public:
		void setdata(string a, int b){
			name = a;
			age = b;
		}
};

class Student : public Human{
	public:
		int roll;
		
		void setroll(int a){
			roll = a;
		}
		
		void print(){
			cout << name << " " << age << " " << roll << endl;
		}
};

int main(){
	Student s;
	s.setdata("Shiva", 19);
	s.setroll(529);
	
	s.print();
}