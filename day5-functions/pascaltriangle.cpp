#include <iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            int num = fact(i)/(fact(j)*fact(i-j));
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}