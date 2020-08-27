#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int min=0;
    int test;
    int arr[100];
    int i;
    int index;
    int length;
    cin>>test;
    while(test--){
      index=0;
      cin>>length;
      for(i=0;i<length;i++){
          cin>>arr[i];
      }
      min=arr[0];
      for(i=0;i<length;i++){
      if(arr[i]<min)
      {
        min=arr[i];
        index=i;
      }}
      //cout<<min<<endl;
      cout<<index<<endl;;
    }
    return 0;
  }