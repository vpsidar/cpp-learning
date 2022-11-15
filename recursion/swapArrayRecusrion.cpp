#include<iostream>
using namespace std;
void reverse(int arr[],int p1, int p2){
    if(p1>p2) return ;
    int temp = arr[p1];
    arr[p1] = arr[p2];
    arr[p2] = temp;
    reverse(arr,p1+1,p2-1);
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr,0,6);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}