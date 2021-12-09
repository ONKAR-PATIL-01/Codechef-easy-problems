#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
  int s[n];
    for(int i=0;i<n;i++)
    {
       cin>>s[i]; 
       
       }
    int flag=1;
    if(s[0]!=1)
    {
            flag=0;
    }
    if(s[n/2]!=7)
    {
            flag=0;
          
    }
    int i=0,j=n-1;
    while(i<j)
    {
            if(s[i]!=s[j])
            {
                    flag=0;
                    break;
            }
            if(s[i]!=s[i+1]&&s[i+1]!=s[i]+1)
            {
                    flag=0;
                    break;
            }
            i++;
            j--;
            
    }
    if(flag==1)
    {
            cout<<"yes"<<endl;
    }
    else
    {
            cout<<"no"<<endl;
    }
       

     
    }
    return 0;
}