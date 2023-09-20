#include <bits/stdc++.h>
using namespace std;

class Phone{
public:
    virtual void selfie() = 0;  // Pure virtual functions
};

class Realme : public Phone{
public:
    int mp = 64;
    void selfie(){
        cout << "We have " << mp << " camera";
    }
};

int main(){
    Realme *r = new Realme;
    r->selfie();
}