#include<bits/stdc++.h>
using namespace std;

void special(vector<vector<int>> a){
    int r=a.size();
    int c=a[0].size();
    vector<int> res;
    for(int i=0;i<r;i++){
        int min=1000007;
        int max=0;
        int k=0;
        for(int j=0;j<c;j++){
            if(a[i][j]<min){
                min=a[i][j];
                k=j;
            }
        }
        for(int j=0;j<r;j++){
            if(a[j][k]>max){
                max=a[j][k];
            }
        }
        if(min == max){
            res.push_back(min);
        }
    }
    for(auto i : res){
        cout<<i<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    vector<vector<int>> a(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            a[i].push_back(t);
        }
    }
    special(a);
    return 0;
}