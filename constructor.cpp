#include <iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;
    Student(int a, string n){
        name = n;
        age = a;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Student s1(20,"priyanshu");
    s1.display();
    return 0;
}