#include<iostream>
using namespace std;

int main(){
       int n;
    cout<< "Enter the limit";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        cout<<" ";
        for(int k=i+1;k>0;k--)
        cout<<k;

      cout<<endl;
    }
    return 0;
}