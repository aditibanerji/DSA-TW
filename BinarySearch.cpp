#include<iostream>
#include<algorithm>
using namespace std;
/*
    BEST = O(1)
    AVG,WORST = O(logN)
*/
bool binarysearch(int a[] , int n , int target)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(a[mid]==target)
        {
            return true;
        }
        else if(a[mid]>target)
        {
            e=e-1;
        }
        else if(a[mid]<target)
        {
            s=s+1;
        }
        mid = s+(e-s)/2;

    }

    return false;
}
int main()
{
    int n;
    cout<<"enter number of elements in array\n";
    cin>>n;

    int a[10];

    cout<<"enter "<<n<<" elements in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    int target;
    cout<<"enter target element\n";
    cin>>target;

    if(binarysearch(a,n,target))
    {
        cout<<"Element Found\n";
    }
    else
    {
        cout<<"Element Not Found\n";

    }
}