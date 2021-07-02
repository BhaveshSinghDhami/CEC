#include<bits/stdc++.h>
using namespace std;

int uniqueMorseRepresentations(vector<string>& words) {
        
 string st[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
  
  set<string> ss;
  for(auto x : words){
    string s="";
    for(auto y : x){
      s.append(st[y-'a']);
    }
    
    ss.insert(s);
  }
  
  return ss.size();
        
        
    }


int main(){
    vector<string> words={"gin","zen","gig","msg"};

int a=uniqueMorseRepresentations(words);
cout<<a<<" ";

return 0;
}