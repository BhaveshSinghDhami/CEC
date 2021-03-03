#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void randomize(int a[],int l,int h){
int n=h-l+1;
int r=rand()%n;
swap(&a[l+r] ,&a[h]);
}

int partition(int a[],int l,int h){
    int i=l-1;
    int t=a[h];

    for(int j=l;j<h;j++){
        if(a[j]<t){
            i++;
            swap(&a[i] ,&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    
    return i+1;
}

void quicksort(int a[],int l, int h,int k,int &x,int &b){
    if(l<h){
        randomize(a,l,h);
        int pivot=partition(a,l,h);

        if(pivot==k){
            b=a[pivot];   
            if(x!=-1)    return;
        }else if(pivot==k-1){
            x=a[pivot];   
            if(b!=-1)    return;
        }
        if(pivot>=k)
        quicksort(a,l,pivot-1,k,x,b);
        else
        quicksort(a,pivot+1,h,k,x,b);
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the limit ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,h=n-1,x=-1,b=-1;
    int mid;
    int k=n/2;
    if(n%2==1){
    quicksort(a,l,h,k,x,b);
    mid=b;
    }else{
        quicksort(a,l,h,k,x,b);
    mid=(x+b)/2;
    }
    cout<<mid;
    return 0;
}