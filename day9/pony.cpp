#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &A, int val ) {
    int l =0; int r = A.size();
    int mid = 0;
    while (l<=r)
    {
        mid = (l+r)/2;
        if(A[mid] > val){
            r = mid-l;
        } else if (A[mid] < val){
            l = mid + l;
        } else {
            return mid;
        } 
    }
    return l;
}
vector<int> getSum(vector<int> &A, vector<vector<int> > &B){
    vector<int> psum;
    vector<int> ans;
    psum.push_back(A[0]);
    for(int i = 1; i<A.size(); i++){
        psum.push_back(psum[i-1] + A[i]);
    }
    //return psum;
    for(int j = 0; j< B.size(); j++){
        int start = B[j][0]-1;
        int end = B[j][1]-1;
        int sum = 0;
        if(start !=0){
            sum = psum[end] - psum[start-1];
        } else {
            sum = psum[end];
        }
        ans.push_back(sum);
    }
    return ans;
}
vector<vector<int>> printAllSubArray(vector<int> &A) {
    vector<vector<int>> rv;
    vector<int> r1;
    for(int s=0; s<A.size(); s++) {
        for(int i = s; i<A.size(); i++){
            r1.clear();
            for(int j = s; j<=i; j++){
                r1.push_back(A[j]);
            }
            rv.push_back(r1);
        }
        
    }
}
int main(){
    vector<int> vect;
    vector<int> items = {1,2,3,4,5};
    vector<vector<int> > pairs = {{1,4},{2,3}};
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

    int sr  = binarySearch(vect,20);
    vector<int> ans =  getSum(items, pairs);
    for (int j = 0; j < ans.size(); j++)
    {
        cout<<ans[j]<<" ";
    }
    // cout<<"Item is in the position " <<sr << endl;
    return 0;
}
