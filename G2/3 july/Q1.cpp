#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int psum[n];
psum[0]=a[0];
for(int i=1;i<n;i++){
    psum[i]=psum[i-1]+a[i];
}
int l,r;
cin>>l>>r;
if(l==0){
    cout<<psum[r];
}else{
    cout<<psum[r]-psum[l-1];
}

return 0;
}