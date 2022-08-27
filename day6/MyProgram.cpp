#include <iostream>
using namespace std;
int main() {
    int ary[3] = {10,20,30};
    int i = 0;
    cout<<"size of array is "<< sizeof(ary)<<endl;
    while ((sizeof(ary)/sizeof(int)) > i)
    {
        cout<<ary[i]<<endl;
        i++;
    }
    
    cout<<"Hello WOrld";
    return 0;
}
