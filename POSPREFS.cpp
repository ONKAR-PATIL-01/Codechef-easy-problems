#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
int i,sum=0;
int x[n+1];
for(i=1;i<=n;)
{
        if(k==0||k==n)
                break;
        
        if(sum+i<=i+1&&k>0)
        {
                x[i]=i;
                sum+=i;
                i++;
                k--;
                continue;
        }
        if(sum>i)
        {
                x[i]=-i;
                sum-=i;
                i++;
                if(sum>0)
                   k--;
                continue;
        }
        if(sum+i>i+1&&k==1)
        {
                x[i]=-i;
                i++;
                if(sum-i>0)
                {
                        break;
                }
                else{
                sum-=i;
                continue;
                }
        }
        if(sum+i>i+1&&k>1)
        {
                x[i]=i;
                if(sum>0)
                {
                        k--;
                }
                sum+=i;
                i++;
        }
}

if(k==n)
{
   for(i=1;i<=n;i++)
   {
           x[i]=i;
   }
}
else if(i<=n)
{
        for(;i<=n;i++)
        {
                x[i]=-i;
        }
}
for(i=1;i<=n;i++)
{
        cout<<x[i]<<" ";
}
    cout<<endl;
    }
    
    return 0;
}