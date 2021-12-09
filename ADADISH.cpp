#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
            cin>>x[i];
    }
    sort(x,x+n);
    int a=0,b=0;
    for(int i=n-1;i>=0;i--)
    {
      if(a<=b)
      {
              a+=x[i];
      }
      else
      {
              b+=x[i];
      }
            
    }
 cout<<  max(a,b)<<endl;
    }
    return 0;
}