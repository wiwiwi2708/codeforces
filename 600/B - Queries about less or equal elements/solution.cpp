#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int m, n;
  cin>> m>>n;
  vector<int> v1(m);
  vector<int> v2(n);
  for(int i = 0; i < m; i++){
      cin>>v1[i];
  }
  sort(v1.begin(), v1.end());
  
  for(int i = 0; i < n; i++){
      cin>>v2[i];
  }
  
  for(int n: v2){
      cout<<upper_bound(v1.begin(), v1.end(), n) - v1.begin()<<" ";
  }
  
  return 0;
}