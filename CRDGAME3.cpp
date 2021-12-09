#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int p,r;
    cin>>p;
    cin>>r;
    double x=0.0,y=0.0;
//  x=round(p/9);
//  y=round(r/9);

        x=ceil(p/9.0);

        y=ceil(r/9.0);


  if(x>=y)
    {
           cout<<1<<" "<<y<<endl;
    }
          if(x<y)
    {
           cout<<0<<" "<<x<<endl;
    }
   
   }
    return 0;
}