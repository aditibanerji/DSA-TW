#include<iostream>
using namespace std;
/*
        BEST,AVG,WORST = O(nlogn)
*/
void merge(int a[] , int l , int m , int r)
{
    int n1=m-l+1;
    int n2=r-m;


    int L[n1],R[n2];

    for(int i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=a[m+1+j];
    }
    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {

        if(L[i]<=R[j])
        {
           
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {

        a[k++]=L[i++];

    }
    while(j<n2)
    {

        a[k++]=R[j++];
    }



}
void mergesort(int a[] , int l ,int r)
{
    if(l<r)
    {
     
    int mid = l+(r-l)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    merge(a,l,mid,r);
    }
}
int main()
{
    int n;
    cout<<"enter no of elements in array\n";
    cin>>n;

    int a[n];

    cout<<"enter "<<n<<" elements in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l=0,r=n-1;

    mergesort(a,l,r);

    cout<<"After Sorting :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}