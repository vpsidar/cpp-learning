#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    arr[2] = 100;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }

    arr[1] = 1;
    
}

void printInt (int a) {
    cout<<a<<endl;
    a = 100;
}
//  If you pass array to function this goes to as a pointer in fn arguments where as if you pass normal int float then act as pass by value
int main () {
    int a[] = {1,2,3,4};
    int num = 20;
    printArray(a,4);
    for (int i = 0; i < 4; i++)
    {
        cout<<a[i]<<endl;
    }
    printInt(num);

    cout<<num;

    return 0;
}