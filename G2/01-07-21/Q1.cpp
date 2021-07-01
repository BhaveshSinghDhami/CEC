#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int c=0,max=0;
    for(int i=0;i<n;i++){
        max=a[i];
        c=0;
        for(int j=0;j<n;j++){
            if(max>a[j] && i!=j){
                c++;
            }
        }
        cout<<c<<" ";
    }
}