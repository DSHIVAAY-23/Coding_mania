

#include<bits/stdc++.h>

using namespace std;
bool palindrome(int n)
{
    int rev = 0;
    int x = n;
    while(x>0){
        int ld = x%10;
        rev = rev*10 +ld;
        x = x/10;
    }
    return(rev==n);

    // Write your code here
}
int main()
{
   int n = 12345;
   cout<< "Number of digits in "<<n<<" is "<<palindrome(n);
   return 0;
}