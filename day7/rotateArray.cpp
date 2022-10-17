#include<iostream>
using namespace std;
void rotateArr(int arr[], int d, int n){
        int tempArr[n];
        
        for(int i = 0; i< n; i++ ) {
            tempArr[i + d] = arr[i];
        }
        
        int i = 0;
        while (i<n)
        {   
            arr[i] = tempArr[i];
            // cout<<tempArr[i]<<endl;
            i++;
        }
        
        
    }
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    rotateArr(arr,2,7);
    int i = 0;
    while (i<7)
    {
        cout<<arr[i]<<endl;
        i++;
    }
    
    return 0;
}