#include<iostream>
using namespace std;
class Sum{
    public:
    int sum(int arr[], int n){
        int sum =0;
        for(int i =0; i< n; i++ ){
            sum += arr[i];
            
        }
        return sum;
    }
};
int main(){
    int arr[4]={1,2,3,4};
    Sum s;
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = s.sum(arr,n);
    cout<<"sum is:"<<ans<<endl;
    return 0;
}