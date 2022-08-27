#include<iostream>
// #include<math.h>
using namespace std;
int power(int num, int pow) {
    int numPow = 1;
    for (int i = 0; i < pow; i++)
    {
        numPow = numPow * num;
    }

    return numPow;
    
}
void binaryToDecimal(int num) {
    int arr[32];
    int i = 0;
    while(num > 0) {
        arr[i] = num%10 ;
        num = num/10;
        i++;
    }
    //cout<<i<<endl;
    int decimalNum = 0;
    for (int j = 0; j < i; j++)
    {

        //cout<<arr[j];
        if(arr[j] == 1) {
            decimalNum = decimalNum + power(2,j);
        }
    }
    cout<<decimalNum<<endl;
    
}
int main() {
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    //cout<<power(10,2);
    binaryToDecimal(n);
    return 0;
}
