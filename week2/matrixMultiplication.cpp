#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int m,n;
    
    cin>>m;
    cin>>n;
    int arr1[m][n];
    int arr2[m][n];
    int i,j,arr[m][n];
    int arr3[m][n];
    int k;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++){
        cin>>arr[i][j];
    }
     for(i=0;i<m;i++)
    for(j=0;j<n;j++){
        cin>>arr1[i][j];
    }
      for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        {
            arr2[i][j]=0;
        }
    for(i=0;i<m;i++)
    for(j=0;j<n;j++){
      arr2[i][j]=arr[i][j]+arr1[i][j];
    }
      for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cout<<arr2[i][j]<<" ";
  }
    cout<<endl;
      }
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        {
            arr3[i][j]=0;
        }
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    for(k=0;k<m;k++){
      arr3[i][j]+=arr[i][k]*arr1[k][j];
    }
    
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cout<<arr3[i][j]<<" ";
  }
  cout<<endl;}
  }