#include<iostream>
using namespace std;
class Cricketers{
    public:
    string name;
    int run;
    Cricketers(string n , int r){
        name = n;
        run = r;
    }

    Cricketers(Cricketers &c){
        name = c.name;
        run = c.run;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Run: "<<run<<endl;
    }
};
int main(){
    Cricketers c1("Sachin" , 100000);
    Cricketers c2(c1);
    c1.display();
    c2.display();
    return 0;
}