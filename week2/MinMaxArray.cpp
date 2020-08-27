#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int min;
    int max;
    int test;
    int length;
    int i;
    int arr[10000000];
    cin>>test;
    while(test--){
      cin>>length;
      for(i=0;i<length;i++){
        cin>>arr[i];
      }
      min=arr[0];
      max=arr[length-1];
      
      for(i=0;i<length;i++){
      if(arr[i]<min)
        min=arr[i];
       if(arr[i]>max)
          max=arr[i];
      }
      cout<<min<<" "<<max<<endl;
     // cout<<max<<endl;
    }
    return 0;
  }