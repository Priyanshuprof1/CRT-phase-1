#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;
    Student(){
        name = "priyanshu";
        age = 20;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Student s1;
    s1.display();
    return 0;
}



//parameterised constructor
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

//constructor overloading
#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;
    Student(){
        name = "enter name please";
        age = 0;
    }
    
    Student(int a, string n){
        age = a;
        name = n;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Student s1;
    Student s2(20,"priyanshu");
    s1.display();
    s2.display();
    return 0;
}



