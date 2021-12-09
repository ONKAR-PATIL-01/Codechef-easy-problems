#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long a,b,n;
    cin>>a>>b>>n;
   
        if(n%2==1)
        a=a*2;
        
        cout<<max(a,b)/min(a,b)<<endl;
   
    
   
    }
    return 0;
}