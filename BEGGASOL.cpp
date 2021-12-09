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
    int fuel=x[0],d=0;
    for(int i=1;i<n;i++)
    {
            if(fuel==0)
            {
                    break;
            }
            else
            {
               d++;
               fuel--;
               fuel+=x[i];
            }
    }
    d+=fuel;
    cout<<d<<endl;
    }
    return 0;
}