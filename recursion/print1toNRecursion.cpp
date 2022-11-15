#include<iostream>
using namespace std;
void print1toN(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    print1toN(i+1,n);
}
void print1toNV1(int n){
    if(n<1) return;
    print1toNV1(n-1);
    cout<<n<<endl;
}
void printNto1R(int n){
    if(n<1) return;
    cout<<n<<endl;
    printNto1R(n-1);
}
int main(){
    //print1toN(1,10);
    printNto1R(10);
    return 0;
}