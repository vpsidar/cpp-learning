#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > diagonal(vector<vector<int> > &A) {
    //vector<vector<int> > ans(A.size());
	vector<vector<int> > ans(
    2*A.size()-1,
    vector<int>(A.size()));
    int rowP = 0;
    for(int j=0; j<A.size(); j++){
        int i = 0;
        int dj = j;
        while(i<A.size() && dj>=0){
            ans[j][i] = A[i][dj];
            i++;
            dj--;
        }
        rowP++;
        
    }
    // cout<<rowP<<endl;

    for(int r=1; r<A.size(); r++) {
        int j = A.size() -1;
        int i = r;
        int ir = 0;
        while(i<A.size() && j>=0){
            ans[rowP][ir] = A[i][j];
            i++;
            j--;
            ir++;
        }
        rowP++;
    }
    
    
    return ans;
}
int main(){
    vector<vector<int> > ans(3,vector<int>(3));
    int count = 1;
    for(int i = 0; i< 3; i++) {
        for(int j = 0; j< 3; j++){
            ans[i][j] = count++;
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int> > res = diagonal(ans);
    cout<<"Result----"<<endl;
    for(int i = 0; i< res.size(); i++) {
        for(int j = 0; j< res[0].size(); j++){
            //ans[i][j] = count++;
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}