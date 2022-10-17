#include<iostream>
#include<vector>
using namespace std;
int maxSubarray(int A, int B, vector<int> &C) {
    //if length = 1;
    if(A== 1) {
        if(C[0] <= B) {
            return C[0];
        } else {
            return 0;
        }
    }
    vector<int> pf ;
    pf.push_back(C[0]);
    for(int i =1; i<A; i++){
        pf.push_back(pf[i-1]+C[i]);
    }
    // for(int m = 0 ; m< pf.size(); m++){
    //     cout<<pf[m]<<endl;
    // }
    
    int max = INT_MIN;
    for(int j=A-1; j>=0; j--){
        for(int k = 0; k<=j; k++){
            int sum ;
            if(k == 0){
                sum = pf[j];
            } else {
                sum = pf[j] - pf[k-1];
            }
            if(sum >max && sum <= B){
                max = sum;
            }
        }
    }
    if(max == INT_MIN) return 0;
    return max;
}
int main(){
    vector<int> items = {3, 8, 8, 9, 7};
    cout<<maxSubarray(5,7,items)<<endl;
}