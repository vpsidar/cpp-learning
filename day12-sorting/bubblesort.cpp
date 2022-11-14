#include<iostream>
using namespace std;

int main(){
    
    int ar[] = {3,1,4,5,0,3,7,2,6,7};
    int size = sizeof(ar)/sizeof(ar[0]);
    for(int i = 0; i< size; i++){
        for(int j = 0; j < size-1-i; j++) {
            if(ar[j] > ar[j+1]){
                swap(ar[j], ar[j+1]);
            }
        }
    }

    for(int k = 0; k< size; k++){
        cout<<ar[k]<<endl;
    }
    
    return 0;

}