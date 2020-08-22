#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int number;
    cin>>number;
    while(number!=0){
      cout<<(number%10);
      number=number/10;
    }
    return 0;
  }