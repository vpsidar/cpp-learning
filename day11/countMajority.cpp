#include<iostream>
using namespace std;
int main(){
    int ar[] = {3,3,4,1,5,6,3,5,6,7,3,4};
    int count = 1;
    for (int i = 1; i < 12; i++)
    {
        if(ar[i] != ar[i-1]) {
            count--;
        }
    }
    
    return 0;
}