#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = i; i<= n; i++)
    {
        for (int j = 0; j <= n ; j++)
        {
            if(j <= n-i){
                cout<<"  ";
            } else {
                cout<<"* ";
            }
        }
        cout<<endl;
        
    }
    
    return 0;
}