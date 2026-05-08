#include<iostream>
using namespace std;

namespace Virat{
    void show(){
        cout<<"Virat Kohli is the best batsman in the world"<<endl;
    }
}

namespace Rohit{
    void show(){
        cout<<"Rohit Sharma is the best batsman in the India"<<endl;
    }
}

int main(){
    Virat::show();
    Rohit::show();
    return 0;
}