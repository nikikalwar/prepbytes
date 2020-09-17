#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    //fascinating problem
    //a number is fascinating if the digits are unique
    //taking the input
    
  int n;
  cin>>n;
 
  while(n--){
    int num;
    cin>>num;///9875
    int i;
     int rem1,rem2,rem3,rem4;
     ++num;
     while(true){
    //  cout<<num;
      rem1=num/1000;
      rem2=(num/100)%10;
      rem3=(num%100)/10;
      rem4=num%10;
      
        if(rem4!=rem3 && rem4!=rem2 && rem4!=rem1 &&rem3!=rem2 && rem3!=rem1 && rem2!=rem1 )
      {
        break;
      }
      else num=num+1;
     }
     // cout<<num<<endl;
    // cout<<rem1<<rem2<<rem3<<rem4<<endl;
    cout<<rem1<<rem2<<rem3<<rem4<<endl;
    
    //endl;
  }
  return 0;
  }