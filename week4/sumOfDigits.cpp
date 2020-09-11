//using recursion sum of digits program

#include <bits/stdc++.h>
  using namespace std;
  int sum;
  int rem;
  void recursion(int z);
  int main()
  {
    //write your code here
    int test;
    cin>>test;
    int n;
    while(test--){
      cin>>n;
      sum=0;
      recursion(n);
    }
    return 0;
  }
  
  void recursion(int z){
    rem=z%10;
    sum=sum+rem;
    z=z/10;
    if(z>0) return recursion(z);
    else {
      cout<<sum<<endl;
      return;
    }
  }