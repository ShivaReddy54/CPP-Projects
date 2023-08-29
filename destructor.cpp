#include <bits/stdc++.h>
using namespace std;

class Human{
	string name;  
	int age;
	
	public:		
		~Human(){  // Destructor
			cout << "Destructor is called" << endl;
		}
};

int main(){
	Human *p = new Human;

	delete p;	// calls destructor 
}