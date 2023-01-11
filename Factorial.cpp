#include<iostream>
using namespace std;

/*
     BEST,AVG,WORST = O(n)

*/
int main()
{
    int n;
    cout<<"enter no to find it's factorial\n";
    cin>>n;

    int fact=1;

    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    cout<<fact;
}