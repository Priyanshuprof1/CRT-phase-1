#include<iostream> 
using namespace std;
class solution {
    public:
    int largest(int arr[],int n){
        int max =arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
};
int main(){
    int arr[5]{3,4,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    solution s;
    cout<<"largest element :"<<s.largest(arr , n)<<endl;
    return 0;
}