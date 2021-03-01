#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selection(int a[],int n){
    int t,pos;
    for(int i=0;i<n-1;i++){
        t=a[i];
        pos=i;
        
        for(int j=i+1;j<n;j++){
            if(a[j]<t){
                t=a[j];
                pos=j;
            }
        }
        swap(&a[i],&a[pos]);
    }
}

void display(int a[],int n){
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

int main(){
    int n;
    cout<<"Enter the limit ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection(a,n);
    display(a,n);
    return 0;
}