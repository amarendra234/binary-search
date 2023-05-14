#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    //print(v);
    int pos=0;
    for(int i=0;i<n;i++){
        auto it=upper_bound(v[i].begin(),v[i].end(),12);
         pos+=(it-v[i].begin());
        
    }
    cout<<pos<<endl;
    
    
}
