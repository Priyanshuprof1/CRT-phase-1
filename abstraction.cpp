#include<iostream>
using namespace std;

class Atm{
    public:
    int balance;
    Atm (int b){
        balance=b;
    }
    void withdraw(int a){
        if(balance<a){
            cout<<"insufficient balance"<<endl;
        }
        else{
            balance -= a;
            cout<<"successfully withdrawn"<<a<<endl;
        }

    
    }
    void showBalance(){
        cout<<"balance: "<<balance<<endl;
    }
};

int main(){
    Atm a(10000);
    a.withdraw(5000);
    a.showBalance();
    return 0;
}