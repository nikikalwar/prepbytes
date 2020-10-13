#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
       string str;
    int test;
    cin>>test;
  
    while(test--){
     
    cin>>str;
    int i;
    int count;
    int freq[26]={0};
    int n=str.length();
        for(i=0;i<n;i++)
        freq[str[i]-97]++;
    
    
   /*
   
    for(i=0;i<26;i++){
      cout<<freq[i];
    }
    */
    //cout<<freq[0]<<endl;
   // if(n%2==1) n=n+1;
   count=n;
    if(freq[0]>((n/2)+1)){
      cout<<n;
    }
    
    else if(freq[0]>0){
      for(i=0;i<n;i++){
        if(freq[0]<((count/2)+1))
        count--;
        else break;
      }
       cout<<count;
      }
      
     // count=count+1;
     // count=n-freq[0]
     

    

    cout<<endl;
    }
    return 0;
  }