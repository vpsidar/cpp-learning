#include<iostream>
using namespace std;
bool checkPalindrome(string str, int i,int n){
    if(i >= n-i-1) return true;
    if(str[i] != str[n-i-1]){
        return false;
    }
   return checkPalindrome(str,i+1,n);
}
int main(){
    string str = "MADAN";
    cout<<checkPalindrome(str,0,5);
    return 0;
}