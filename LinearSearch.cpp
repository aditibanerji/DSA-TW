#include<iostream>
using namespace std;
bool linearsearch(int a[] , int n , int target)
{
    for(int i=0;i<n;i++)
     {
        if(a[i]==target)
        {
            return true;
        }
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

    int target;
    cout<<"enter element to be searched\n";
    cin>>target;

    if(linearsearch(a,n,target))
    {
        cout<<"Element Found\n";
    }
    else
    {
        cout<<"Element Not Found\n";
    }
}