#include <iostream>
using namespace std;
 void fibo(int n) {
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 0; i < n; i++)
    {
        cout<<t1<<endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
}
int main(){
    int n;
    cin>>n;
    fibo(n);
    
    
    return 0;
}