#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void insertion(int a[],int n){

for(int i=1;i<n;i++){
int j=i-1;
int t=a[i];
while(a[j]>t && j>=0){
    a[j+1]=a[j];
    j--;
}
swap(&a[j+1],&t);
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
    insertion(a,n);
    display(a,n);
    return 0;
}