#include<bits/stdc++.h>
using namespace std;
    
    bool isValid(string s) {
        
        int n=s.length();
        int  top=-1;
        int a[n];
        for(int i=0;i<n;i++){
            if(s[i]=='(' ||s[i]=='[' || s[i]=='{')
            {
                top++;
                a[top]=s[i];
            }else if(top!=-1){
                    if(s[i]==')' ||s[i]==']' || s[i]=='}'){
             if((a[top]=='{' && s[i]=='}') || (a[top]=='[' && s[i]==']') || (a[top]=='(' && s[i]==')')){
             top--;
            }else return false;
            }
        }else  return false;
        }
        
        if(top==-1)
            return true;
        else return false;
    }

int main(){
string a,b;
cin>>a;

if(isValid(a)){
    cout<<"True"<<endl;
}else{
    cout<<"False"<<endl;
}

return 0;
}