#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int h){
int n1=m+1-l;
int n2=h-m;
int a1[n1],a2[n2];

for(int i=0;i<n1;i++)
a1[i]=a[l+i];


for(int j=0;j<n2;j++)
a2[j]=a[m+1+j];

int i=0,j=0,k=l;
while(i<n1 && j<n2){
    if(a1[i]<a2[j]){
        a[k++]=a1[i++];
    }else{
        a[k++]=a2[j++];
    }
}
while(i<n1)
a[k++]=a1[i++];

while(j<n2)
a[k++]=a2[j++];

}
void mergesort(int a[],int l,int h){

if(l<h){
    int mid=(l+h)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    merge(a,l,mid,h);
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
    int l=0,h=n-1;
    mergesort(a,l,h);
    display(a,n);
    return 0;
}