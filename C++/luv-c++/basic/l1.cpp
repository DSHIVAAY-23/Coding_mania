 #include<bits/stdc++.h>
 using namespace std;
const int N = 1e5 +10;


 int main() {
    
int s;
cin>>s;
int reverse_no =0;
while(s>0){
	int last_digit = s%10;
	reverse_no = (reverse_no*10) + last_digit;
	s= s/10;
}
cout<<reverse_no<<endl;

 }