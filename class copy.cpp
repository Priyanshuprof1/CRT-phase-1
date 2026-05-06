// create a class named student
#include <iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Student s1;
    s1.name = "priyanshu";
    s1.age = 20;
    s1.display();
    return 0;
}

/*Car*/

#include <iostream>
using namespace std;
class Car{
    public:
    string CarName;
    int topSpeed;
    void display(){
        cout<<"name: "<<CarName<<endl;
        cout<<"Topspeed: "<<topSpeed<<endl;
    }
    
};

int main()
{
    Car c1;
    c1.CarName = "audi";
    c1.topSpeed = 200;
    c1.display();

    return 0;
}