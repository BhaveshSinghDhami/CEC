#include<iostream>
using namespace std;

int main(){
       int n,t;
    cout<< "Enter the limit";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        cout<<" ";
        t=1;
        for(int k=0;k<i*2+1;k++)
       { cout<<t;
           if(k<i) t++;
            else t--;
        }
      cout<<endl;
    }
        for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++)
        cout<<" ";
        t=1;
        for(int k=0;k<(n-1)*2-2*i-1;k++)
        {   cout<<t;
            if(k<n-2-i) t++;
            else t--;
        }
      cout<<endl;
    }
    return 0;
}