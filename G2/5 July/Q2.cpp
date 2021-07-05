#include<bits/stdc++.h>
using namespace std;

void dfs(vector <vector<int>> &china,int i,int j,int inf){

if(china[i][j]==1){
    china[i][j]=inf;
    if(i>0)                 dfs(china,i-1,j,inf);
    if(j>0)                 dfs(china,i,j-1,inf);
    if(i<china.size()-1)    dfs(china,i+1,j,inf);
    if(j<china.size()-1)    dfs(china,i,j+1,inf);
   }
}

int main(){
int n;
cin>>n;
vector<vector<int>> china(n);

for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
     int t;
     cin>>t;
    china[i].push_back(t);
}
}

int x,y,inf;
cin>>x>>y;

cin>>inf;

dfs(china,x,y,inf);

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<china[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
