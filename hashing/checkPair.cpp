#include<iostream>
using namespace std;
//naive approach n^2 TC
bool checkPair(int B[], int A, int n){
    
    for(int i = 0; i< n; i++) {
        for(int j = i+1; j<n; j++){
            if(B[i] + B[j] == A) {
                return true;
            }
        }
    }
    return false;
} 
int main(){
    int arr[] = {3,5,1,2,4,1};
    int n = sizeof(arr) / sizeof(int);
    cout<<checkPair(arr, 8,n);
    return 0;
}
