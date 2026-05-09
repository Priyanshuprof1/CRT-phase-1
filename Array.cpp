//contigous block of memory , use to store data of same type
//array is fixed size data structure
//array is stored in stack memory
//array index starts from 0
//array store data in contigous memory location
//syntax : data_type array_name[size];
#include<iostream>
using namespace std;
int main(){
    int arr[5]; //declaration of array
    //initialization of array
   for(int i=0; i<5;i++){
    cin>>arr[i];
   }
   
    //accessing array elements
    cout<<"Array elements: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    int n = sizeof(arr)/sizeof(arr[0]); //size of array
    cout<<"\nSize of array: "<<n;
    cout<<endl;
    return 0;
}
