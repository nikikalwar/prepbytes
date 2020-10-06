#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int test;
    int i;
    int n;
    long long sum;//,newSum;
    cin>>test;
    while(test--){
      cin>>n;
      sum=0;
     int arr[n-1];
     for(i=0;i<n-1;i++){
       cin>>arr[i];
     //  cout<<arr[i]<<" ";
      // sum=sum+arr[i];
     }
      for(i=0;i<n-1;i++){
       sum=sum+arr[i];
     }
    
     long long total=((long long)n*(n+1))/2;
     
     int num=total-sum;
     cout<<num;
     cout<<endl;
  }
    return 0;
  }