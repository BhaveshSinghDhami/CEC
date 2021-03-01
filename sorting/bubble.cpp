#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble(int a[],int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);
        }
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
    bubble(a,n);
    display(a,n);
    return 0;
}