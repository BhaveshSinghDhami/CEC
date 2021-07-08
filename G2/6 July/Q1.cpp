#include<bits/stdc++.h>
using namespace std;

void weak(vector<vector<int>> a,int k){
int r=a.size();
int c=a[0].size();
vector<int> v;
set<pair<int,int>> s;
int sum=0;

for(int i=0;i<r;i++){
    v=a[i];
sum=accumulate(v.begin(),v.end(),sum);
s.insert({sum,i});
sum=0;
v.clear();
}

int ct=0;
for(auto i : s){
    v.push_back(i.second);
    ct++;
if(ct==k)
break;
}
for(auto i: v){
    cout<<"Hospital "<<i+1<<endl;
}
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> a(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            a[i].push_back(t);
        }
    }
    int k;
    cin>>k;
    weak(a,k);
    return 0;
}