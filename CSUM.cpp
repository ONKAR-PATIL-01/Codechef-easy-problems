#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=n-1;
    int flag=0;
    while (i<j)
    {
            if(a[i]+a[j]==k)
            {
               flag=1;
               break;
            }
            if(a[i]+a[j]>k)
            {
                    j--;
            }
              if(a[i]+a[j]<k)
            {
                    i++;
            }
            
    }
    if(flag==1)
    {
            cout<<"Yes"<<endl;
            
    }
    else
    {
            cout<<"No"<<endl;
    }
    }
    return 0;
}