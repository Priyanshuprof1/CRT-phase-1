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
class Cricketers{
    public:
    string country;
    void setCountry(string cu){
        country = cu;
    }
    
    
};

class Batter : public Cricketers, public Player{
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
class Footballer : public Player{
    public:
    string club;
    int goals;
    void setClub(string c){
        club = c;
    }
    void setGoals(int g){
        goals = g;
    }
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"club :"<<club<<endl;
        cout<<"goals : "<<goals<<endl;
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
    Footballer f1;
    f1.setName("messi");
    f1.setClub("psg");
    f1.setGoals(700);
    f1.display();
    

    return 0;
}