#include<iostream>
using namespace std;
void rotateArr(int arr[], int d, int n){
        int tempArr[n];
        for(int i = d,j = 0; i< n; i++,j++ ) {
            tempArr[j] = arr[i];
        }
        for (int j = 0; j<= n-d; j++){
            // cout<<j+n
            // -d<<endl;
            tempArr[j+n-d] = arr[j];
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
    int arr[5] = {1,2,3,4,5};
    rotateArr(arr,3,5);
    int i = 0;
    while (i<5)
    {
        cout<<arr[i]<<endl;
        i++;
    }
    
    return 0;
}