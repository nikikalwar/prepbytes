#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
   int pattern;
   cin>>pattern;
   int i,j;
   for(i=1;i<=5;i++){
   for(j=0;j<i;j++){
     cout<<pattern<<" ";
   }
   cout<<endl;
   }
    return 0;
  }