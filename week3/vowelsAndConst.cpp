#include <bits/stdc++.h>
  using namespace std;
  #include<string>
  
  int main()
  {
    //write your code here
    int vowels;
    int consonants;
    int n,freq1,freq2;
     
     int i;
    cin>>n;
    //cout<<n;
 while(n--){
   string str2;
   freq1=0;
   freq2=0;
 cin>>str2;
   for(i=0;i<str2.length();i++){
      if(str2[i]=='A'||str2[i]=='E'||str2[i]=='I'||str2[i]=='O'||str2[i]=='U'){
        freq1++;
      }
      else freq2++;
   }
   cout<<freq1<<" ";
   cout<<freq2<<endl;
 }
   
    return 0;
  }