#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int test;
    int arr[1000];
    int length,i;
    int counter;
    cin>>test;
   // cin>>length;
    while(test--){
      counter=0;
        cin>>length;
          for(i=0;i<length;i++){
              cin>>arr[i];
    // cout<<arr[i];
              }
            if(arr[0]>arr[1]){
               counter++;
                     cout<<"0"<<" ";}
                           for(i=1;i<length-1;i++){
                                   if((arr[i]>arr[i+1]) && (arr[i]>arr[i-1])){
                                         cout<<i<<" ";
                                                 counter++;
          //cout<<"somethin";
                                  }}
      //cout<<i;
     // cout<<length;
    //cout<<i;
                if(arr[i]>arr[i-1])
                        {
                              counter++;
                              cout<<i;
            
                                }
                            if(counter==0) cout<<"-1";
                                        cout<<endl;
                                         }
    return 0;
  }