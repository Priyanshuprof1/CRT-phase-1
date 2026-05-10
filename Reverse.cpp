#include<iostream>
using namespace std;
class Reverse{
    public:
    
    void reverse(int arr[], int n){
        int start = 0;
        int end = n-1; 
        while(start<end){
            int temp = arr[start];
            arr[start]=arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
cout<<"Reversed array: ";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    int arr[4]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    Reverse r;
  r.reverse(arr,n);
    return 0;

}
