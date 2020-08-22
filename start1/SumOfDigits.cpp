#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int input;
    cin>>input;
    int sum=0;
    int rem;
    while(input!=0){
      rem=input%10;
      sum=sum+rem;
      input=input/10;
      
    }
    cout<<sum;
    
    return 0;
  }