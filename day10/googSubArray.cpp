#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> &A, int B) {
    int count = 0;
    for(int i =0; i<A.size(); i++) {
        int sum = 0;
        for(int s=i; s<A.size(); s++){
            //check sub array 
            int subArLength = s - i+ 1;
            sum = sum + A[i];
            if(subArLength%2 == 0 && sum < B) {
                count++;
            }  
            if(subArLength%2 != 0 && sum > B) {
                count++;
            }

        }
    }
    return count;
}
int main() {
    vector<int> ans;
    int count = 1;
    for(int i = 0; i< 6; i++) {
        ans.push_back(count++);
       // ans[i] = count++;
    }
    for(int i = 0; i< 6; i++) {
        cout<<ans[i]<<" ";
       // ans[i] = count++;
    }
    cout<<endl;
    int res = solve(ans, 4);
    cout<<res<<endl;
    return 0;
}