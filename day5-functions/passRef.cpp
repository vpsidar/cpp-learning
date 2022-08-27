#include <iostream>
using namespace std;

int customFun(int* ptr1) {
    cout<<ptr1;
    *ptr1 = 30;
    return 0;
}

int main() {
    cout<<"Hello world meera";
    int a = 20;
    cout<<a<<endl;
    customFun(&a);
    cout<<a;

    
    return 0;
}