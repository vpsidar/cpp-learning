#include<iostream>
#include<math.h>
using namespace std;
int countFactor(int N) {
    int ans =0;
    for(int i =0; i<=sqrt(N); i++){
        if(N%i == 0) {
            if(i == N/i) {
                ans++;
                break;
            }
            ans += 2;
        }
    }
    return ans;
}
int main() {
    int N = 10;
    cout<<"Factor of "<< N<<" is " << countFactor(N)<<endl;
    return 0;
}