#include<iostream>
using namespace std;
int main(){
    int ar[] = {5, 814, 761, 697, 483, 981};
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < (sizeof(ar)/sizeof(ar[0])); i++)
    {
        if(ar[i] > max){
            max = ar[i];
        }
        if(ar[i]< min){
            min = ar[i];
        }
    }
    cout<<"max is "<<max<<endl;
    cout<<"min is "<<min<<endl;
    
    return 0;
}
