#include<iostream>
using namespace std;

//question - given a sorted array and K , find the pair whose sum is equal to K , and the complexity for the above calculation should be O(1);

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int k = 11;
    int i = 0;
    int j = 7-1;
    int sum = 0;
    int ans = 0;
    while (i < j)
    {
        sum = arr[i] + arr[j];
        if(sum == k) {
            i++;
            j--;
            ans++;
        }
        if(sum< k) {
            i++;
        }
        if(sum > k) {
            j--;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}