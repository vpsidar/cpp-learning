#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<vector<int> > x(3,vector<int>(0));
    int count = 1;
    for(int i = 0; i < x.size(); i++ ){
        for(int j =0; j< x[0].size(); j++){
            x[i][j] = count++;
        }
    }
    
    vector<vector<int> > A(3,vector<int>(0));
    for(int i = 1; i < x.size(); i++ ){
        for(int j =0; j< x[0].size(); j++){
            if(i<j){
                A[i][j] = x[i][j];
            }
        }
    }

    for(int i = 0; i < x.size(); i++ ){
        for(int j =0; j< A[0].size(); j++){
            cout<<x[i][j] << " ";
        }
        cout<<endl;
    }
    
    return 0;
}