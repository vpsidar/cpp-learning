#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif    
    // insert code here...
    int a, b;
    cin>>a>>b;
    // cout << a+b<<"\n";
    int i = 0;
    while(i< 10) {
        int j =0 ;
        while (j<= i)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}
