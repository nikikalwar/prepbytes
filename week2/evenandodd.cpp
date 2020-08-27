#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int length;
    int i;
    cin>>length;
    int arr[length];
   for(i=0;i<length;i++){
     cin>>arr[i];
   }
   for(i=0;i<length;i++){
     if(arr[i]%2==0)
     cout<<arr[i]<< " ";
   }
   cout<<endl;
   
   for(i=0;i<length;i++){
     if(arr[i]%2!=0)
     cout<<arr[i]<< " ";
   }
   
    return 0;
  }