#include<iostream>
using namespace std;
void printMsg(){
    cout<<"Hello World!"<<endl;
}
int main()
{
    printMsg();
    return 0;
}

/*types of functions*/
// 1. Function with no parameters and no return value
// 2. Function with parameters and no return value
// 3. Function with no parameters and return value
// 4. Function with parameters and return value 

// Function with parameters and return value 
#include<iostream>
using namespace std;
int add(int x , int y){
    return x+y;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"sum is"<<add(a,b)<<endl;
    return 0;

}

//write a function that takes num as input coke bottle print total volume of coke if in each bottle is 250ml coke
#include<iostream>
using namespace std;
int totalVolume(int num){
    return num*250;
}
int main(){
    int n;
    cin>>n;
    cout<<"total volume is : "<<totalVolume(n)<<endl;
    return 0;
}

//