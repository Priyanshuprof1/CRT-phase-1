#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string str1 = "Hello";
    string str2 = "World";
    cout<< str1 << " " << str2 <<endl;
    int n = str1.length();
    //lenght
    cout<<"Length of string 1: "<< n << endl;
    //empty 
    cout<<"Is string 1 empty? "<< str1.empty() << endl;
    //append
    cout<<"after appending : "<< str1.append("Students")<<endl;
    // concatination
    cout<<"after concatination : "<< str1 + "Bacho " <<endl;
    // push back
    str1.push_back('!');
    cout<<"after push back : "<< str1 <<endl;
    // pop back
    str1.pop_back();
    cout<<"after pop back : "<< str1 <<endl;
    // find
    int index = str1.find("lo");
    cout<<"index of 'lo' in str1 : "<< index <<endl;
    // substring
    string substr = str1.substr(0,5);
    cout<<"substring of str1 : "<< substr <<endl;
    // at method
    char ch = str1.at(1);
    cout<<"character at index 1 in str1 : "<< ch <<endl;
    // swap
    swap(str1, str2);
    cout<<"after swapping : "<< endl;
    cout<<"str1 : "<< str1 << endl;
    cout<<"str2 : "<< str2 << endl;
    // getline
    string str3;
    cout<<"Enter a string : ";
    getline(cin, str3);
    cout<<"You entered : "<< str3 <<endl;
    return 0;

}