

#include<bits/stdc++.h>

using namespace std;

int main()
{
     int res = 1;
     int n;
    for (int i =2;i<n;i++)
    {
        res  = res*i;
    }
    int x = 0;

    while(res%10==0){
        x++;
        res = res/10;
    }
    
}
