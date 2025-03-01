

#include<bits/stdc++.h>

using namespace std;
bool isprime(int a)
{
    if (a==1)return false;
  for(int i = 2; i <a; i++)
    if(a%i==0)return false;
    
    return true;
     
     
  

}  

int main()
{
   int a = 7;

   cout<< isprime(a)<<endl;
   
}