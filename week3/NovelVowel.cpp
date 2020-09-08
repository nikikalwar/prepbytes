#include <bits/stdc++.h>
  using namespace std;
  #include<string>
  
  int main()
  {
    //write your code here
    int test;
    int counter;
  cin>>test;
  int i;
    while(test--){
   string str2;
   cin>>str2;
   counter=1;
   for(i=0;i<str2.length()-1;i=i+1){
  if(str2[i]=='n'){i=i+1;}
  else {
          if(!(str2[i]=='a'||str2[i]=='e'||str2[i]=='i'||str2[i]=='o'||str2[i]=='u'))
          if((str2[i+1]=='a'||str2[i]=='e'||str2[i]=='i'||str2[i]=='o'||str2[i]=='u'))
        { counter=0;
        }
          else counter=1;
  }}
        if(counter==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
          
   }
    return 0;
  }