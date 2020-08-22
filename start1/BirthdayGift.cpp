#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n,a,b,i;
  int counter=0;
  cin>>n;
  for(i=0;i<n;i++){
        cin>>a;
        cin>>b;
        if((b-a)>=2){
          counter++;
        }
  }
  
  
  cout<<counter;
  
  return 0;
  
}