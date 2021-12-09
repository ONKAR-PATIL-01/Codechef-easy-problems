#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int t;
    cin>>t;
    while(t--)
    {
          long long n,k;
           cin>>n>>k;
           long long a[n+1];
    map<long long,long long>mp;
  long long total=1e18;
    for(int i=0;i<n;i++)
    {
           cin>>a[i];
    }
   long long col[n+1][n+1]={0};
    for(int i=0;i<n;i++)
    {
           for(int j=0;j<n;j++)
           col[i][j]=0;
    }
    for(int i=0;i<n;i++)
    {
           mp.clear();
      for(int j=i;j<n;j++)
      {
             col[i][j]=(j==0)?0:col[i][j-1];
   
             if(mp.count(a[j]))
             {
                    if(mp[a[j]]==1)
                    {
                           col[i][j]++;
                    }
                    col[i][j]++;
             }
             mp[a[j]]++;
      }
    }
    total=1e18;
    long long table=100;
    long long dp[101][1001]={0};
    for(int i=0;i<=table;i++)
    {
           for(int j=0;j<=n;j++)
           dp[i][j]=0;
    }
    for(int i=1;i<n+1;i++)
    {
           dp[1][i]=col[0][i-1];
    }
    for(int i=2;i<=table;i++)
    {
           dp[i][1]=0;
    }
    for(int i=2;i<=table;i++)
    {
           for(int j=2;j<=n;j++)
           {
                  long long best=1e18;
                  for(int p=1;p<j;p++)
                  {
                         best=min(best,dp[i-1][p]+col[p][j-1]);
                  }
                  dp[i][j]=best;
           }
    }

    for(table=1;table<=100;table++)
    {
           total=min(table*k+dp[table][n],total);
    }
   cout << total <<endl;
    }
    return 0;
}