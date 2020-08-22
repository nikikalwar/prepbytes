#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int input;
    int test;
    int temp;
    cin>>test;
    while(test--){
    cin>>input;
    if(input%10==0) cout<<"0"<<endl;
    else if(input%5==0) cout<<"1"<<endl;
    else cout<<"-1"<<endl;
  }
    return 0;
  }