#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int input;
    cin>>input;
    int number;
    int rem=0;
    int counter;
    while(input){
      cin>>number;
    //cout<<number<<endl;
   counter=0;
    while(number!=0){
    rem=number%10;
    number=number/10;
    if(rem==5){
      //cout<<counter;
      counter++;
    }
    if(number==0)
     input--;
    }
      cout<<counter<<endl;
    }
    return 0;
  }