#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,pd;
    cin>>n>>pd;
    int x[n];
    int count=0,c=0;
    for(int i=0;i<n;i++)
    {
            cin>>x[i];
            if(x[i]>=80||x[i]<=9)
            {
               count++;     
            }
    }
     int rem=n-count;
   while(count>0)
   {
           count=count-pd;
           c++;
   }
  
   while(rem>0)
   {
       rem=rem-pd;
       c++;
   }
   cout<<c<<endl;
    }
    return 0;
}