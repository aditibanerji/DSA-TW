#include<iostream>
#include<vector>
using namespace std;
/*
     BEST - O(N)
     AVG,WORST - O(N^2)
 
*/
int main()
{
    int n,x,t,j;
    cout<<"enter number of elements in arrray\n";
    cin>>n;

    vector<int>a;

    cout<<"enter "<<n<<" elements in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    for(int i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;

        while(j>=0 && a[j]>t)
        {
            a[j+1]=a[j];
            j=j-1;
        }   
        a[j+1]=t;

    }

    cout<<"After sorting :\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}