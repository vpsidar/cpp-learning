#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int counter = 0;
    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<++counter<<" ";
        }
        
        cout<<endl;
        
    }
    
    return 0;
}