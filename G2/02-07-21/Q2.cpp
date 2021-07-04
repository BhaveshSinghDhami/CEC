 #include<bits/stdc++.h>
 using namespace std;
 
 
 int subsetXORSum(vector<int>& arr) {
        
        if(arr.size() == 0) return 0;
        
        int total_sum=0;
    
        int n = arr.size();
        int subset_ct = (1<<n);

        for(int i=0 ; i<subset_ct ; i++){

          int temp = 0,sum=0;
          for(int j =0 ; j<n ; j++){


            if(i & (1<<j)) temp = arr[j]^temp;
          }

          total_sum+=temp;
        }

        return total_sum;
    }

    
int main(){
    vector<int> ar={3,4,5,6,7,8};

int a=subsetXORSum(ar);
cout<<a<<" ";

return 0;
}