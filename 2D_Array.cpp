#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    //initialization of 2D array
    for(int i=0; i<3 ;i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }  
}

for(int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int n = sizeof(arr)/sizeof(arr[0][0]);
 cout<<"\n Size of 2D array: "<<n;
return 0;
}
    
