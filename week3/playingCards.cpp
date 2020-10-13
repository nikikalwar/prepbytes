#include <bits/stdc++.h>
#include<string>
#include<iostream>
  using namespace std;

  int main()
  {
    //write your code here
    int test;
    int i;

    cin>>test;
                while(test--){
                      int flag=1;
                    char str1[2];
                    for(i=0;i<2;i++){
                        cin>>str1[i];
                       // cout<<str1[i];
                    }
                   // cout<<endl;
                    char str2[10];
                    for(i=0;i<10;i++){
                       cin>>str2[i];
                      // cout<<str2[i];
                   }
                   for(i=0;i<10;i++)
                    if(str2[i]==str1[0]||str2[i]==str1[1]){
                        cout<<"YES";
                        flag=0;
                        break;
                    }
                    if(flag==1) cout<<"NO";
                cout<<endl;
                
                }
    return 0;
  }