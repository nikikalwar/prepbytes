#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
     int n;
    int a[1000000];
    int i;
    int test;
    int max;
    cin>>test;
   
    while(test--){
          cin>>n;
          for(i=0;i<n;i++){
            cin>>a[i];
             }
        
            cout<<a[n-1]<<" ";
            max=a[n-1];
                  for(i=n-2;i>=0;i--){
                    if(a[i]>=max){
                      max=a[i];
                      cout<<a[i]<<" ";
                    }}
                   
                 
                   cout<<endl;
    }
    return 0;
  }