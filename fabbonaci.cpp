#include<iostream>
using namespace std;
int fabbonaci(int n){
    if(n==0){
        return 0;

    }
    if(n==1 || n==2){
        return 1;
    }
    return fabbonaci(n-1) + fabbonaci(n-2);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ans = fabbonaci(n);
    cout<<"Fabbonaci of "<<n<<" is : "<<ans<<endl;
    return 0;
}