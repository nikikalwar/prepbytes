#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
  //write yur code here
  float input,quantity;
  float price;
  float total;
  cin>>input;
  while(input--){
    cin>>quantity;
    cin>>price;
    if(quantity>100){
      total=quantity*price-price*quantity*0.20;
    }
      else total=quantity*price;
    //  total=static_cast<float>(total);
    //cout<<total<<endl;
    cout<<fixed;
    cout<<setprecision(1);
    cout<<total<<endl;
  }
  return 0;
  
}