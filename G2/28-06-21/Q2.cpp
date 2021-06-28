#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],key;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

cin>>key;

int i=0,j=n-1;

while(i<j){
    if(a[i]==key){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        j--;
    }else{
        i++;
    }
}

    for(int i=0;a[i]!=key;i++){
        cout<<a[i]<<" ";
    }
return 0;
}