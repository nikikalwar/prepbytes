#include <bits/stdc++.h>
  using namespace std;
  #include<string>
  
  
  int main()
  {
    //write your code here
    int n;
    int i,j;
    cin>>n;
     int max_char=26;
      while(n--){
      string str;
      cin>>str;
      int freq[max_char]={0};
     for(i=str.length()-1;i>=0;i--){
      freq[str[i]-'a']++;
     }
     for(i=max_char-1;i>=0;i--)
     for(j=0;j<freq[i];j++)
     cout<<(char)('a'+i);
     
     cout<<endl;
      }
    return 0;
  }
  