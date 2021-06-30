#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
              cin>>a[i][j]; 
        }
    }
int max=0,cust=0;

  for(int i=0;i<n;i++){
      int sum=0;
        for(int j=0;j<n;j++){
              sum+=a[i][j];
        }
     if(sum>max){
         max=sum;
         cust=i+1;
     }
    }
 cout<<cust<<endl;

return 0;
}
