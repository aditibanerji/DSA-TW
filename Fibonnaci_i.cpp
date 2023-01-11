#include<iostream>
using namespace std;
/*
    BEST,AVG,WORST = O(n)
  
*/
int main()
{
 

    int n;
    cout<<"enter n\n";
    cin>>n;

    int f[n+1];
    f[0]=0;
    f[1]=1;

    if(n==1 || n==0)
    {
        cout<<f[n];
    }
    
    for(int i=2;i<=n;i++)
    {
        f[i] = f[i-1]+f[i-2];
    }
    cout<<f[n];
}