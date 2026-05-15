#include<iostream>
using namespace std;
class ListNode {
    public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
        return false;
    }
    if(n==1){
        return true;
    }
    if(n%4==0 && isPowerOfFour(n/4)){
        return true;
    }
    return false;
        
    }
};
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    Solution sol;
    bool ans = sol.isPowerOfFour(n);
    if(ans){
        cout<<n<<" is a power of 4."<<endl;
    } else {
        cout<<n<<" is not a power of 4."<<endl;
    }
    return 0;
}