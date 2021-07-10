#include<bits/stdc++.h>
using namespace std;

int roman(char i){

    switch(i){
        case 'I':return 1;
        break;
        case 'V':return 5;
        break;
        case 'X':return 10;
        break;
        case 'L':return 50;
        break;
        case 'C':return 100;
        break;
        case 'D':return 500;
        break;
        case 'M':return 1000;
        break;
    }
    return -1;
}
int main(){
    string s;
    cin>>s;
    int sum=0;

    for(int i=0;i<s.size()-1;i++){
        if(roman(s[i]) < roman(s[i+1])){
            sum-=roman(s[i]);
        }else{
            sum+=roman(s[i]);
        }
    }
    sum+=roman(s[s.size()-1]);
    cout<<sum<<" ";
}