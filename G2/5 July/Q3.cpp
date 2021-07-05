#include<bits/stdc++.h>
using namespace std;

int main(){
int m,n;
cin>>m>>n;
int a[m][n];

for(int i=0;i<m;i++){
 for(int j=0;j<n;j++){
    cin>>a[i][j];
}
}

int f=1;

for(int i=0;i<m-1;i++){
 for(int j=0;j<n-1;j++){
    if( a[i][j]!=a[i+1][j+1]){
    f=0;
      cout<<f<<" ";
    }
  
    }
}

if(f==1){
    cout<<" Special"<<endl;
}else{
    cout<<"Not Special"<<endl;
}


return 0;
}