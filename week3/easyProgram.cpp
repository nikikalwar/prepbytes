#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int test;
    cin>>test;
    int freq1;
    int freq2,n;
    char arr[10000000];
    int i;
    while(test--){
      cin>>n;
      freq1=0;
      freq2=0;
      for(i=0;i<n;i++){
        cin>>arr[i];
      }
        for(i=0;i<n;i++){
        if(arr[i]=='A') freq1++;
        else freq2++;}
    if(freq1>freq2) cout<<"Aditya"<<endl;
    else if(freq2>freq1) cout<<"Danish"<<endl;
    else cout<<"AdiDan"<<endl;
  }
    return 0;
  }