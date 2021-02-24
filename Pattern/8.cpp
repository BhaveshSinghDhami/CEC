#include<iostream>
using namespace std;

int main(){
       int n;
    cout<< "Enter the limit";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int k=0;k<n-i;k++)
        cout<<n-k-i;

      cout<<endl;
    }
    return 0;
}