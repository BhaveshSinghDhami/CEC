#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
int i=a.size()-1;
int j=b.size()-1;
string ans="";
int c=0; 
while(i>=0 || j>=0 || c==1){
    if(i>=0)  c+=a[i]-'0';
    if(j>=0)  c+=b[j]-'0';
    if(c%2==0){
         ans='0'+ans;
    }else{
         ans='1'+ans;
    }
     c/=2;
    i--;
    j--;
}
return ans;
}

int main(){
string a,b;
cin>>a;
cin>>b;
string ans=addBinary(a,b);
cout<<ans<<" ";
return 0;
}