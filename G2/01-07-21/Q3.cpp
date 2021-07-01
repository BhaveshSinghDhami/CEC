#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> v;
    int fre=0,val=0;
    for(int i=0;2*i<n;i++){
        fre=a[2*i];
        val=a[(2*i)+1];
        for(int j=0;j<fre;j++){
            v.push_back(val);
        }
    }
    for(auto it :v){
        cout<<it<<" ";
    }

return 0;
}