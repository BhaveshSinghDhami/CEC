#include<bits/stdc++.h>
using namespace std;


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

for(int i=0;i<n;i++){
    reverse(a[i].begin(),a[i].end());
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        a[i][j]=a[i][j] xor 1;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
