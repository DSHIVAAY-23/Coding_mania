

#include<bits/stdc++.h>

using namespace std;
int lcm(int a,int b)
{
    
    int res = min(a,b);
    while(res>0){
    if(res%a == 0 && res%b == 0 )
    {
        break;
    }

        
    res++;
    }
    return res;

}
int main()
{
   int a = 3;
   int b= 4;
   cout<< lcm(a,b)<<endl;
   
}