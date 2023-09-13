#include <bits/stdc++.h>
using namespace std;

class A{
public:
    void add(int x, int y){
        cout << x + y << endl;
    }

    void add(int x, int y, int z){
        cout << x + y + z << endl;
    }
};
int main(){
    A a;
    a.add(2,3);
    a.add(2,3,5);
}