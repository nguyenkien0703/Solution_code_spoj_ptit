//https://www.spoj.com/PTIT/problems/PTITSU1C/ 


#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
  int n,m;
  vector<int> v;
  cin >> n >> m;
  v.resize(n);
  for(int i=0;i<n;i++) cin >> v[i];
  int res = 0;  
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int k=j+1;k<n;k++){
        int tmp = v[i]+v[j]+v[k];
        if (tmp <= m && tmp > res){
          res = tmp;
        }
      }
    }
  }
  cout << res << endl;
}
 
int main(){
  
  int T;
  cin >> T;
  while(T--){
    process();  
  }
 
  return 0;
}