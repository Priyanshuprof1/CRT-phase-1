#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int fact = n*factorial(n-1);
    return fact;

}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ans = factorial(n);
    cout<<"Factorial of "<<n<<" is : "<<ans<<endl;
    return 0;
}