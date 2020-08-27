#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int test;
    int length;
    int i;
    cin>>test;
    int arr[10];
    int multi;
    while(test--){
    cin>>length;
    for(i=0;i<length;i++){
      cin>>arr[i];
    }
    multi=1;
    for(i=0;i<length;i++){
      multi=arr[i]*multi;
    }
    cout<<multi<<endl;
  }
    return 0;
  }