#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    //write your code here
    int rotations;
    int test;
    int length;
    int i;
    int j;
    int k=0;
    int temp=0;
    int arr[10000];
    cin>>test;
    while(test--){
      cin>>length;
      cin>>k;//rotations;
      for(i=0;i<length;i++){
        cin>>arr[i];
      }
      if(k>length) k=k%length;
      while(k--){//rotations
     temp=arr[length-1];
      //for(i=0;i<k;i++)//rotation loop
      for(j=length-1;j>0;j--){
      arr[j]=arr[j-1];
      }
      arr[0]=temp;
      }
      for(i=0;i<length;i++)
      cout<<arr[i]<<" ";
      cout<<endl;
  }
    return 0;
  }