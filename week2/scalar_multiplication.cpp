#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int m,n,k;
    cin>>m;
    cin>>n;
    cin>>k;
    int i;
    int j;
    int arr[m][n];
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      cin>>arr[i][j];
      arr[i][j]=k*(arr[i][j]);
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
  }