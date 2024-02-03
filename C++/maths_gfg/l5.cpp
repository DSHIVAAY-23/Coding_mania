

#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b)
{
    
    int res = min(a,b);
    while(res>0){
    if(a%res == 0 && b%res == 0 )
    {
        break;
    }

        
    res--;
    }
    return res;

}
int main()
{
   int a = 100;
   int b= 200;
   cout<< gcd(a,b)<<endl;
   
}