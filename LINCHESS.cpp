#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long n,k;
    cin>>n;
    cin>>k;
    long long x[n] ,y[n]={0},f=0;
    for(int i=0;i<n;i++)
    {
         cin>>x[i];  
    }
    sort(x,x+n);
     for(int i=n-1;i>=0;i--)
    {
         if(k%x[i]==0)
         {
           cout<<x[i]<<endl;
           break;
         }
        else
        {
               f++;
        }
     }
 if(f==n)
 {
        cout<<-1<<endl;
 }
    }
    return 0;
}