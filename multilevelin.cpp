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
    void setCountry(string cu){
        country = cu;
    }
    
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"runs : "<<runs<<endl;
        cout<<"country :"<<country<<endl;
    }
};

class Batter : public Cricketers{
    public:
    int centuries;
    void setCenturies(int c){
        centuries = c;

    }

    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"runs : "<<runs<<endl;
        cout<<"country :"<<country<<endl;
        cout<<"centuries : "<<centuries<<endl;
    }
};
int main()
{
    Batter c1;
    c1.setCenturies(50);
    c1.setCountry("india");
    c1.setName("virat kholi");
    c1.setRuns(25000);
    c1.display();
    

    return 0;
}