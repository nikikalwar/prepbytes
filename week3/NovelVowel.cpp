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
   counter=0;
   for(i=0;i<str2.length();i=i+1){
  
          if(!(str2[i]=='a'||str2[i]=='e'||str2[i]=='i'||str2[i]=='o'||str2[i]=='u'||str2[i]=='n')){
          if(!(str2[i+1]=='a'||str2[i+1]=='e'||str2[i+1]=='i'||str2[i+1]=='o'||str2[i+1]=='u'))
        { counter=1;
        }

      //  else if(str2[i]==NULL) counter=1;}
}
      
  }
        if(counter==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
          
   }
    return 0;
  }

  