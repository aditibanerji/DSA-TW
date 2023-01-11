#include<iostream>
using namespace std;
/*
      BEST,AVG,WORST = O(2^n)

*/
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"enter no. to find fibonnaci series\n";
    cin>>n;

    cout<<fib(n);
}