#include<iostream>
using namespace std;
int addDigit(int n){
    if(n==0){
        return 0;
    }
    int sum = n%10;
    return sum + addDigit(n/10);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ans = addDigit(n);
    cout<<"Sum of digits of "<<n<<" is : "<<ans<<endl;
    return 0;
}