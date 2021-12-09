#include <bits/stdc++.h> 
using namespace std; 

int length(int k)
    {
      int c=0;
      while(k>0)
      {
        c++;
        k=k/2;
      }
      if(c==0)
      {
          return 1;
      }
      return c;
    }  
    int XOR(int x, int y)
    { 
            int z;
            z=(x | y) & (~x | ~y);
       return z ;
    }
int main() 
{ 
    int t,n,x,i,j,k;
  cin>>t;
  int powers[]= {1 , 2 , 4 , 8 , 16 , 32 , 64 , 128 , 256 , 512 , 1024 , 2048 , 4096 , 8192 , 16384 , 32768 , 65536 , 131072 , 262144 , 524288 , 1048576 , 2097152 , 4194304 , 8388608 , 16777216 , 33554432 , 67108864 , 134217728 , 268435456 , 536870912};
    while(t--)
    {
      cin>>n;
      cin>>x;
      long long a[n];
      for(i=0;i<n;i++)
      {
        cin>>a[i];
      }
      if(n==2)
      {
        while(a[0]!=0&x-->0)
        {
          k=length(a[0]);
          a[0]=XOR(a[0],powers[k-1]);
          a[1]=XOR(a[1],powers[k-1]);
        }
        if(x>0&&x%2==0)
        {
          a[0]=1;
          a[1]=a[1]^1;
        }
      }
      else
      {
for(i=0;i<n-1;)
      {
              if(x==0)
                  break;
              if(a[i]!=0)
              {
                  x--;
                  k=length(a[i]);
                  a[i]=a[i]^powers[k-1];
                  if(a[i+1]<(a[i+1]^powers[k-1]))
                  {
                     j=i+1;
                while((j+1)<n&&a[++j]<(a[j]^powers[k-1]));
                     if(j==n)
                     {
                      a[n-1]=(a[n-1]^powers[k-1]);
                     }
                     else
                     {
                      a[j]=(a[j]^powers[k-1]);
                     }
                  }
                  else
                {
                    a[i+1]=(a[i+1]^powers[k-1]);
                }
              }
              else
              {
                  i++;
              }
      }
}
          
      for(i=0;i<n;i++)
      {
        cout<<a[i]<<" ";
      }
      cout<<endl;
    }
}
