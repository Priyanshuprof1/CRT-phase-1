//pointer is a variable which stores address of different variable.
#include<iostream>
using namespace std;
int main(){
    int x = 10;
int *ptr = &x;
*ptr=8;


cout << ptr<<endl; 
cout << x;  
*ptr=19;
cout<<x<<endl;
return 0;
}

//wap cpp program that applies 10% discount using reference update the actual bill

#include<iostream>
using namespace std;
int billAmount(int *price){
    int upd = *price - (*price*10/100);
    return upd;
}
int main(){
    int price=1000;
    cout<<price<<endl;
    cout<<"updated price"<<billAmount(&price)<<endl;
    return 0;

}

// wap cpp program to swap two numbers using pointers

#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"after swapping"<<endl;
    cout<<"a: "<<*a<<endl;
    cout<<"b: "<<*b<<endl;
}
int main(){
    int x = 10;
    int y = 20;
    int *p = &x;
    int *q = &y;
    cout<<"before swapping"<<endl;
    cout<<"a: "<<*p<<endl;
    cout<<"b: "<<*q<<endl;
    swap(&x,&y);
    return 0;
}

