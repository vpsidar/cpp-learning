#include<iostream>
using namespace std;

int main(){
    int N = 5;
    int arr[5] = {1,1,2,2,5};
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans = ans ^ arr[i];  // using the xor bitwise operator to detect the single occurance;
    }
    cout<<ans<<endl;
    
    return 0;
}