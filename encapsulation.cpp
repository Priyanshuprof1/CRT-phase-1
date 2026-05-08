#include<iostream>
using namespace std;
class Atm{
    private:
    int balance;
    public:
    void setBalance(int b){
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
    int getBalance(){
        return balance;
    }
};
int main(){
    Atm a;
    a.setBalance(10000);
    a.withdraw(1234);
    cout<<"current balance: "<< a.getBalance()<<endl;
    return 0;
}