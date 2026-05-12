#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for(int i=0;i<n;i++){
            if(haystack.substr(i,m)==needle){
                return i;
            }
           
        }
         return -1;
        
    }
};
int main(){
    string haystack = "hello";
    string needle = "ll";
    Solution s;
    int ans = s.strStr(haystack, needle);
    cout<<"First occurrence of needle in haystack is at index: "<< ans << endl;
    return 0;
}