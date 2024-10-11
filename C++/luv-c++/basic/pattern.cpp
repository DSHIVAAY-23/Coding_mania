#include<bits/stdc++.h>
using namespace std ;

void pattern1(int N)
{
    for (int i = 0; i < N; i++)
    {
        
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
       
        cout << endl;

    }
}
void pattern2(int N){
    for (int i = 1; i < N+1; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            cout << "* " ;
        }
       
        cout << endl;

    }
}
void pattern3(int N){
    for (int i = 0; i < N+1; i++)
    {
        
        for (int j = 1; j <= i+1; j++)
        {
            cout << j ;
        }
       
        cout << endl;

    }
}
void pattern4(int N){
    for (int i = 1; i < N+1; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            cout << i ;
        }
       
        cout << endl;

    }
}
void pattern5(int N){
    for (int i = 0; i < N; i++)
    {
        
        for (int j = N; j >= i; j--)
        {
            cout << "* " ;
        }
       
        cout << endl;

    }
}

void pattern6(int N){
    for (int i = 0; i < N; i++)
    {
        
        for (int j = N; j >= i; j--)
        {
            cout << j ;
        }
       
        cout << endl;

    }
}
void pattern7(int N){
    for (int i = 0; i < N; i++)
    {
         for (int j = 0; j < N-i-1; j++)
        {
            cout << " " ;
        }
       
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*" ;
        }
        
       
        cout << endl;

    }
}
void pattern8(int N){
    for (int i = 0; i < N; i++)
    {
         for (int j = 0; j < N-i-1; j++)
        {
            cout << " " ;
        }
       
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*" ;
        }
        
       
        cout << endl;

    }
}
int main()
{   
    
    int N = 5;
    

    pattern1(N);
    pattern2(N);
    pattern3(N);
    pattern4(N);
    pattern5(N);
    pattern6(N);
    pattern7(N);
    pattern8(N);


    return 0;
}