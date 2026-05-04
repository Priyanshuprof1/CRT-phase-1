/* wap a cpp program that takes int as a input from user and print 1 to n all numbers that is divisible by 2*/
#include <iostream>
using namespace std;
int main()
{    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Numbers from 1 to " << n << " that are divisible by 2:" << endl;
    int i = 1;
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}

/* takes int input from user continuosly if user enters -ve number than stop taking input and print all positive numbers entered */ 
#include <iostream>
using namespace std;

int main()
{
   int sum=0;
   while(true){
       int i;
       cin>>i;
       if(i<0){
           break;
       }
       sum = sum + i;
   }
   cout<<sum<<endl;

    return 0;
}


/*a +ve int n as input,calculate the factorial of n*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cin>>n;
    while(n>0){
        fact=fact*n;
        n--;
        
    }
    cout<<fact<<endl;
    return 0;
}
/*wap cppp program takes int n input and print first n terms of fibonacci series*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int c;
    int count=2;
    cout<<a<<" "<<b<<" ";
    while(count<n){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        count++;
    }
    return 0;
}   

/*takes +ve int as check if it is prime or not*/
/*creat table of 5 using for loop*/

/*pritn pattern */
#include <iostream>
using namespace std;

int main()
{
    int n=4;
    int m=5;
   for(int i=1;i<=n;i++){
       for(int j=1;j<m;j++){
           cout<<"*";
           
       }
        cout<<"*";
        cout<<endl;
   }
    return 0;
}