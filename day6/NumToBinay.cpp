#include<iostream>
using namespace std;
void convertToBinaryForm(int num) {
    int arr[32];
    int i=0;
    while(num >0){
        arr[i] = num %2;
        num = num/2;
        i++;
    }
    for (int j = i-1 ; j >= 0; j--)
    {
        cout<<arr[j];
    }
    cout<<endl;
    
}
int main () {
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    convertToBinaryForm(n);
    return 0;
}