#include<iostream>
using namespace std;
int sumNnaturalNo(int n){
    if(n<1) return 0;
    return n + sumNnaturalNo(n-1);
}
int main(){
    cout<<sumNnaturalNo(3)<<endl;
    return 0;
}