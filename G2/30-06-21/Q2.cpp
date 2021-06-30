#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

int extra,max=0;
cin>>extra;

for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}

for(int i=0;i<n;i++){
    if(extra+a[i]>=max){
        cout<<"True"<<" ";
    }else{
        cout<<"False"<<" ";
    }
}
return 0;
}