#include<bits/stdc++.h>
using namespace std ;

int valid(vector<vector<int>> v,int i,int j){
if(i<0 || j<0 || i>=v.size()|| j>=v.size() || v[i][j]==0){
    return 1;
}
return 0;

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


    int sum=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
               sum+=valid(a,i-1,j); 
               sum+=valid(a,i,j-1); 
               sum+=valid(a,i+1,j); 
               sum+=valid(a,i,j+1); 
            }
        }
    }
    cout<<sum<<" ";
return 0;
}