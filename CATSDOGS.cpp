#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long c,d,l;
    cin>>c>>d>>l;
   long long a=0;
    long long sum=(4*c)+(4*d);
    if(c<=2*d)
	   a=4*d;
	   
   else
	   a=4*c-4*d;
	   
    if(l>sum||l<a||l%4!=0)
    {
        cout<<"no"<<endl;    
    }
    
    else{
            cout<<"yes"<<endl;
    }

    
   }
    return 0;
}