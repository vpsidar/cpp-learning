#include<iostream>
using namespace std;
int main () {
    int arr[9] = {1,1,0,1,0,2,2,0,2};
    int low = 0;
    int mid = 0;
    int high = 9-1;
    
    while (mid<=high)
    {
        
        if(arr[mid] == 0) {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid],arr[high]);
            high--;
        }
        
    }
    
    int i =0;
    while (i< 9){
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}