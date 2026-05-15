#include<iostream>
using namespace std;
bool isPower(int n){
    if(n<=0){
        return false;
    }
    if(n==1){
        return true;
    }
    if(n%2==0 && isPower(n/2)){
        return true;
    }
    return false;
    
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool ans = isPower(n);
    if(ans){
        cout<<n<<" is a power of 2."<<endl;
    } else {
        cout<<n<<" is not a power of 2."<<endl;
    }
    return 0;
}