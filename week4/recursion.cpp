/*print the pattern */

#include <bits/stdc++.h>
  using namespace std;
  int counter=0;
  int counter2=0;
     void seRec(int z){
     if(counter2<counter){
        cout<<z<<" ";
      counter2++;
      return seRec(z+5);
    }
    else return;
    }
     void recursion(int z){
     cout<<z<<" ";
     
     if(z>0) {
       counter++;
       return recursion(z-5);
     }
     else return seRec(z+5);
    }
    
 
  int main()
  {
    //write your code here
    //program to find recursion
    int test;
    int n;
    cin>>test;//for n number of test cases
    while(test--){
      counter=0;
      counter2=0;
      cin>>n;//input for which we find the sequence
      int d=5;//the difference
      //printing the pattern using for loop
      recursion(n);
      cout<<endl;
    }
    return 0;
  }