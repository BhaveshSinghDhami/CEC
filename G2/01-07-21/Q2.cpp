#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    char a2[n],a3[n];

     for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    
    for(int i=0;i<n;i++){
        a3[i]=a2[a[i]];
    }

     for(int i=0;i<n;i++){
        cout<<a3[i]<<" ";
     }

    return 0;
}