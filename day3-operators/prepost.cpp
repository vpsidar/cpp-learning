#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b;

    int c = 15;
    int d;

    b = ++a;  // pre incremantal process
    cout<<a<<" "<<b <<endl;

    d = c++;  // post incremental 
    cout<<c<<" "<<d <<endl;
    return 0;
}