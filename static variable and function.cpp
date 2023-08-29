#include <bits/stdc++.h>
using namespace std;

class Student {
	
	public:
		static string clg_name;  // Only once Static is created and used when called.
		int roll;
		string name;
		
		Student(string a, int b){
			name = a;
			roll = b;
		}
		
		void static display(){
			cout << clg_name << endl;  // Displaying of static variable using Static Function
		}
		 
		void print(){   // Normal function can access static var  but static function cant access normal vars
			cout << "Name: " << name << endl;
			cout << "Roll: " << roll << endl;
			cout << "College: "<< clg_name << endl;
		}
};

string Student :: clg_name = "Aec"; // Static variable assinning

int main(){
	Student s("Shiva", 529);	
	
	cout << s.clg_name << endl; // Any one way can be used to display
	s.display();
	
	s.print();
}