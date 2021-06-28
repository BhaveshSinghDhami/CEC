#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

int a2[n],j=n/2,k=0,i=0;

while(k<n){
    a2[k]=a[i];
    k++;
    i++;
    a2[k]=a[j];
    k++;
    j++;
}
   for(int i=0;i<n;i++){
        cout<<a2[i]<<" ";
    }
return 0;
}