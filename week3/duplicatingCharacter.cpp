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
          
        /*for(i=0;i<n;i++){
          if((freq[str[i]-97]>1)){
            cout<<str[i];
          // cout<<str[i];//<<"="<<freq[str[i]-97]<<" ";
                        flag=1;
                        //break;
          } */
        }
              
        
        
       if(flag==0) cout<<"-1";
       // 
        cout<<endl;
        
        
    }
    
    return 0;
  }