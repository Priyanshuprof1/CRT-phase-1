#include<iostream>
using namespace std;

class Area{
    private:
    int lenght;
    int width;
    public:
    Area(int l ,int b){
        lenght = l;
        width = b;
    }

    friend void showArea(Area a);
};

void showArea(Area b){
    cout<<"area : "<< b.lenght*b.width<<endl;
}

int main(){
    Area a1(5,4);
    Area a2(10,20);

    showArea(a1);
    showArea(a2);
    return 0;
}