/* to print the factorial of the number using recursion

#include <bits/stdc++.h>
  using namespace std;
  
  long long fact( int z){
    if(z<=1) return 1;
    else return z*fact(z-1);
  }
  int main()
  {
    //write your code here
    //factorial using recursion
    int input;
    int n;
    cin>>n;
    while(n--){
      cin>>input;
      //result=1;
      int factorial;
     // factorial=;
     cout<<fact(input)<<endl;
    }
    return 0;
  }

  