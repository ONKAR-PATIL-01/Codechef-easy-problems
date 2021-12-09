#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m,n;
    cin>>t>>m>>n;
    int count=0;
    for(int i=0;i<t;i++)
    {
    int x[n+1];
    for(int i=0;i<n+1;i++)
    {
            cin>>x[i];
    }
    if(x[n]>10)
    {
       count=count+0; 
     
    }
    else
    {
            int sum=0;
      for(int i=0;i<n;i++)
      {
           sum+=x[i];   
      }
      if(sum>=m)
      {
              count=count+1;
             
      }
    }
   
    }
    cout<<count<<endl;
    return 0;
}