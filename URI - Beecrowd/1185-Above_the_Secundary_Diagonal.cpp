#include <bits/stdc++.h>
using namespace std;
int main() {
 
 char x;
 cin>>x;
   double arr[12][12],sum=0;
   float count=0;
   for(auto i=0;i<12;i++){
       for (auto j=0;j<12;j++){
           cin>>arr[i][j];
       }
   }
 
      //left side 
      for(int i=0;i<=10;i++){
          for(int j=0;j<=10-i;j++){
              sum+=arr[i][j];
              count++;
          }
      }
      
    if(x=='S'){  
      cout<<fixed<<setprecision(1)<<sum<<endl;
  } 
   else if(x=='M'){
       cout<<fixed<<setprecision(1)<<sum/count<<endl;
   }
 
    return 0;
}