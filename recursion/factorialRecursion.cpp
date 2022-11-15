#include<iostream>
using namespace std;
int factR(int n){
    if(n<1){
        return 1;
    }
    return n * factR(n-1);
}
int main(){
    cout<<factR(3)<<endl;
    return 0;
}