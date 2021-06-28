#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i=0,j=1;
    while(i<n-1){

        if(a[i]!=a[i+1]){
            a[j]=a[i+1];
            j++;
        }
        i++;
    }

    for(int i=0;i<j;i++){
        cout<<a[i]<<" ";
    }
return 0;
}