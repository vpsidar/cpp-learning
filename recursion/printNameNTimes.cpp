#include<iostream>
using namespace std;
void printNameR(string name, int n){
    if(n<1){
        return ;
    }
    cout<<name<<endl;
    printNameR(name,n-1);
}
int main(){
    string name;
    int n;
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"How much?"<<endl;
    cin>>n;
    printNameR(name,n);
    return 0;
}