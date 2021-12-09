#include<bits/stdc++.h>
#include <algorithm> 
using namespace std;
int main(){
    int d1,p1,d2,p2,tot;
    cin>>d1>>p1>>d2>>p2>>tot;
    int mini=min(d1,d2);
    int c=0;
   while(mini!=1)
    {
       c++;
       mini--;
    }
//     cout<<c;
    int vacc=0,count=0;
    while(vacc<tot)
    {
            if(d1<d2)
            {
                 vacc+=p1;  
                 d1++;
            }
            else if(d2<d1)
            {
                    vacc+=p2;
                    d2++;
                   
            }
            else{
                 vacc+=p1+p2; 
                 d1++;
                 d2++;
            }
         count++;   
    }
  cout<<count+c<<endl;
    
    return 0;
}