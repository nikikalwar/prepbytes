#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int index;
    int test;
    int length;
    int i;
    int arr[1000000];
    cin>>test;
    while(test--){
      index=-1;
        cin>>length;
        for(i=0;i<length;i++){
          cin>>arr[i];
        }
        for(i=length-1;i>=0;i--){
          if(arr[i]==1) {
            index=i;
            cout<<i<<endl;;
            break;
        }}
        if(index<0) cout<<index<<endl;
      /*  if(i==0) cout<<"-1"<<endl;
      else{  
        index=i;
        cout<<index<<endl;
      } */
    }
    return 0;
  }