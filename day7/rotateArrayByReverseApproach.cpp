#include<iostream>
using namespace std;


 void reverse (int arr[], int start, int end) {
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
 }
    void rotateArr(int arr[], int d, int n) {
        d = d%n;
        reverse(arr,0, d-1);
        reverse(arr,d,n-1);
        reverse(arr,0, n-1);
    }
//  void rotateArr(int arr[], int d, int n){
//         int tempArr[n];
//         for(int i = d,j = 0; i< n; i++,j++ ) {
//             tempArr[j] = arr[i];
//         }
//         for (int j = 0; j<= n-d; j++){
//             tempArr[j+n-d] = arr[j];
//         }
//         int i = 0;
//         while (i<n)
//         {   
//             arr[i] = tempArr[i];
//             i++;
//         }
//     }   
 int main() {
    int arr[6] = {1,2,3,4,5,6};
    rotateArr(arr,2,6);
    int i = 0;
    while (i<6)
    {
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
 }