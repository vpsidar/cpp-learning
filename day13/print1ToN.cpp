#include<iostream>
using namespace std;
void printNumber(int N){
    if(N< 1) {
        cout<<"\n";
        return;
    }
    printNumber(N-1);
    cout<<N<<" ";
}
bool checkPali(string A,int s, int e){
    if(s>e){
        return false;
    }
    if(A[s] != A[e]){
        return false;
    } else {
        return checkPali(A,s+1,e-1);
    }
}
int main(){
    //printNumber(10);
    string s = "naman";
    cout<<s.length();
    cout<<checkPali(s,0,s.length()-1);

}