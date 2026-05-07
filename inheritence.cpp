#include <iostream>
using namespace std;
class Player{
    public:
    string name;
    int runs;
    
    void setName(string n){
        name = n;
    }
    void setRuns(int r){
        runs = r;
    }
};
class Cricketers : public Player{
    public:
    string country;
    Cricketers(string c){
        country = c;
    }
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"runs : "<<runs<<endl;
        cout<<"country :"<<country<<endl;
    }
};
int main()
{
    Cricketers c1("India");
    c1.setName("virat kholi");
    c1.setRuns(25000);
    c1.display();
    

    return 0;
}