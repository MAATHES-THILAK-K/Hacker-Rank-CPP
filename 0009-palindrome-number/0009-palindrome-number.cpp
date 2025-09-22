#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long s=0;
        while(x>0){
            s=s*10+x%10;
            x=x/10;
        }
        if (temp==s){
            return true;
        }
        return false;
    }
};