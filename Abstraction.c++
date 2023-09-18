#include <bits/stdc++.h>
using namespace std;

class Rbi{
public:
    int tenure;
    int home_loan;
    int savings;

    virtual void home() = 0;
};

class Sbi : public Rbi{
public:
    Sbi(int tenure, int home_loan, int savings){
        this->tenure = tenure;
        this->home_loan = home_loan;
        this->savings = savings;
    }

    void home(){
        cout << "Cant Run bank with out bank loan" << endl;
        home_loan = 10;
        cout << "Home Loan: %" << home_loan << endl;
    }

    void loan(){
        cout << "Tenure: " << tenure << endl;
        cout << "Savings: " << savings << endl;
    }
};

int main(){
  Sbi bank(10, 6, 25000);

  bank.loan();
  bank.home();
}