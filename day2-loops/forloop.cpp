#include <iostream>
using namespace std;

int main(){
    int no_of_odds = 0;
    for (int i = 0; i < 100; i++)
    {   
        if (no_of_odds == 10)
        {
            break;
        }
        
        if(i % 2 == 0) {
            continue;
        }
        cout<<i<<endl;
        no_of_odds++;
    }
    
    return 0;
}