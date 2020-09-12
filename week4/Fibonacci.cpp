//Recursion program to find the fibonacci series

 #include <bits/stdc++.h>
  using namespace std;
 
 int fibonacci(int z){
   if(z==0) return 0;
   if(z==1)  return 1;
   else return fibonacci(z-1)+fibonacci(z-2);
 }
  int main()
  {
    //write your code here
    //fibonacci series using recursion
    
    int test;
    cin>>test;
    int n;
    while(test--){
      cin>>n;
      cout<<fibonacci(n)<<endl;
    }
    
    return 0;
  }