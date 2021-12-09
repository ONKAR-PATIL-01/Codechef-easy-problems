#include<bits/stdc++.h>
#include <algorithm> 

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long a,b;
    cin>>a>>b;
//     if(a==1&&b==1)
//     {
//             cout<<1<<endl;
//     }
//     else
//     cout<<(a*b)/2<<endl;




    long long c1=0,c2=0,c3=0,c4=0;
    
 if(a%2==0)
 {
         c1=a/2;
         c2=a/2;
 }
 else
 {
         c1=a/2;
         c2=(a/2)+1;
 }
    
if(b%2==0)
 {
         c3=b/2;
         c4=b/2;
 }
 else
 {
         c3=b/2;
         c4=(b/2)+1;
 }    
    
    
    
    
    
    
//   while(a!=0)
//     {
//             if(a%2==0)
//             {
//               c1++;     
//             }
//             else
//             {
//                     c2++;
//             }
//             a--;
//     }
//       while(b!=0)
//     {
//             if(b%2==0)
//             {
//               c3++;     
//             }
//             else
//             {
//                     c4++;
//             }
//             b--;
//     }
   long long c=c1*c3;
    long long d=c2*c4;
    cout<<c+d<<endl;
    }
    return 0;
}