#include <bits/stdc++.h>
using namespace std;
int main() {
 int x,y;
 while(cin>>x>>y){
 if(x==0 || y==0){
     break;
 }
 else{
     if(x>0 && y>0){
         cout<<"primeiro"<<endl;
     }
     else if(x>0 && y<0)
         cout << "quarto" << endl;
     else if(x<0 && y>0)
         cout << "segundo" << endl;
     else
         cout << "terceiro" << endl;
 }
 }
 
    return 0;
}
