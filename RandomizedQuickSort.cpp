#include<iostream>
#include <time.h>
#include<algorithm>
using namespace std;
/*
        BEST,AVG,WORST= O(nlogn)
       
*/
int partition(int a[] , int  l , int r)
{
     int pivot = a[r];

     int i=l-1;

     for(int j=l;j<=r-1;j++)
     {
          if(a[j]<pivot)
          {
            i++;
            swap(a[i],a[j]);
          }
     }
     swap(a[i+1],a[r]);
     return (i+1);
}
int partition_r(int a[] , int  l , int r)
{
    //Generating a random number between left and right

    int random = l + rand() % (r-l);
    swap(a[random] , a[r]);
    return partition(a,l,r);

}
void quicksort(int a[] , int l ,int r)
{
    if(l<r)
    {
          
        int pi = partition_r(a,l,r);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);
    }
}
int main()
{
    int n;
    cout<<"enter no of elements in array\n";
    cin>>n;

    int a[n];
    cout<<"enter "<<n<<" elements in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l=0,r=n-1;
    quicksort(a,l,n);

    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}