#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code her
     int test;
     string str;
    cin>>test;

    while(test--){
        int flag=0;
        getline(cin,str);
        while (str.length()==0 )
            getline(cin, str); 
           int n=str.length();
           int i,j;
          // cout<<n;
           int freq[26]={0};
        for(i=0;i<n;i++){
           // cout<<(ch-97);
        freq[str[i]-97]++;
      
        }
        char ch=97;
    for(i=0;i<26;i++){
  
        if(freq[i]>=2){
            cout<<ch<<"="<<freq[i]<<" ";
            flag=1;
           // cout<<ch;
        }
      ch++;
     // cout<<str[i]<<"="<<freq[i]<<" ";
     // cout<<str[i];
        
     // }
    }
       if(flag==0) cout<<"-1";
       // 
        cout<<endl;
        
        
    }
    
    return 0;
  }